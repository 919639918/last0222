#include "mainwindow.h"
#include <QtSerialPort/QSerialPortInfo>
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	Init();
	connect(&port, &QSerialPort::readyRead, this, [=]()
	{
	  QByteArray data;
	  QString StrTemp;
	  data = port.readAll();
	  StrTemp = QString::fromLocal8Bit(data);
	  ui->plainTextEdit->appendPlainText("接收: " + StrTemp);
	});
}
MainWindow::~MainWindow()
{
	delete ui;
}
//初始化串口
void MainWindow::Init()
{
	//获取可用串口并添加到ComBox
	QSerialPortInfo portInfo;
		foreach (portInfo, QSerialPortInfo::availablePorts())
		{
			ui->portSelect->addItem(portInfo.portName());
		}
	//波特率
	ui->comboBox_Bit->addItem("9600");
	ui->comboBox_Bit->addItem("38400");
	ui->comboBox_Bit->addItem("57600");
	ui->comboBox_Bit->addItem("115200");
	//数据位
	ui->combox_Data->addItem("5");
	ui->combox_Data->addItem("6");
	ui->combox_Data->addItem("7");
	ui->combox_Data->addItem("8");
	//停止位
	ui->comBox_End->addItem("1");
	ui->comBox_End->addItem("1.5");
	ui->comBox_End->addItem("2");
	//校验位
	ui->comBox_Check->addItem("无");
	ui->comBox_Check->addItem("奇");
	ui->comBox_Check->addItem("偶");
}
//串口配置/打开
void MainWindow::on_btnOpen_clicked()
{
	//波特率
	serial_bund = ui->comboBox_Bit->currentText().toUInt();

	//数据位
	switch (ui->combox_Data->currentIndex())
	{
	case 0:
		serial_Data = QSerialPort::Data5;
		break;
	case 1:
		serial_Data = QSerialPort::Data6;
		break;
	case 2:
		serial_Data = QSerialPort::Data7;
		break;
	case 3:
		serial_Data = QSerialPort::Data8;
		break;
	}

	//停止位
	switch (ui->comBox_End->currentIndex())
	{
	case 0:
		serial_stopBit = QSerialPort::OneStop;
		break;
	case 1:
		serial_stopBit = QSerialPort::OneAndHalfStop;
		break;
	case 2:
		serial_stopBit = QSerialPort::TwoStop;
		break;
	}
	//校验位
	switch (ui->comBox_Check->currentIndex())
	{
	case 0:
		serial_Check = QSerialPort::NoParity;
		break;
	case 1:
		serial_Check = QSerialPort::OddParity;
		break;
	case 2:
		serial_Check = QSerialPort::EvenParity;
		break;
	}
	port.setPortName(ui->portSelect->currentText());
	port.setBaudRate(serial_bund);
	port.setDataBits(serial_Data);
	port.setStopBits(serial_stopBit);
	port.setParity(serial_Check);
	if (!port.isOpen())
	{
		port.open(QIODevice::ReadWrite);
		ui->plainTextEdit->appendPlainText(port.portName() + "已打开");
	}
	ui->btnOpen->setEnabled(false);

	qDebug() << port.portName();
	qDebug() << port.baudRate();
	qDebug() << port.dataBits();
	qDebug() << port.parity();
	qDebug() << port.stopBits();
}
//串口关闭
void MainWindow::on_btnClose_clicked()
{
	port.close();
	ui->plainTextEdit->appendPlainText(port.portName() + "已关闭");
	ui->btnOpen->setEnabled(true);
}

void MainWindow::on_btnSend_clicked()
{
	port.write(ui->textEdit_Send->toPlainText().toLatin1());
	ui->plainTextEdit->appendPlainText("发送: " +
		ui->textEdit_Send->toPlainText());
}
void MainWindow::on_btn_Clear_clicked()
{
	ui->textEdit_Send->clear();
}
