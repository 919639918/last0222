#include "mainwindow.h"

#include <QtSerialPort/QSerialPortInfo>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	Init();
}

MainWindow::~MainWindow()
{
	delete ui;
}

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
	ui->comBox_End->addItem("2");
	//校验位
	ui->comBox_Check->addItem("e");
	ui->comBox_Check->addItem("n");
}

void MainWindow::on_btnOpen_clicked()
{
	serial_bund = ui->comboBox_Bit->currentText().toUInt();
	serial_Data = ui->combox_Data->currentText().toUInt();
	switch (ui->comBox_End->currentIndex())
	{
	case 0:
		serial_stopBit = QSerialPort::Data5;
		break;
	case 1:
		serial_stopBit = QSerialPort::Data6;
		break;
	case 2:
		serial_stopBit = QSerialPort::Data7;
		break;
	case 3:
		serial_stopBit = QSerialPort::Data8;
		break;

	}
	switch (ui->comBox_Check->currentIndex())
	{
	case 0:serial_stopBit=QSerialPort::OneStop;break;

	}

}

void MainWindow::on_btnClose_clicked()
{
}
