#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qserialport.h>

#include <QMainWindow>
#include <QSerialPort>
QT_BEGIN_NAMESPACE
namespace Ui
{
	class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
 Q_OBJECT

 public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();

 public:
	qint32 serial_bund;                    //波特率
	QSerialPort::DataBits serial_Data;     //数据位
	QSerialPort::StopBits serial_stopBit;  //停止位
	QSerialPort::Parity serial_Check;      //校验位
	QSerialPort port;                      //串口

 private slots:
	void on_btnOpen_clicked();
	void on_btnClose_clicked();
	void on_btnSend_clicked();
	void on_btn_Clear_clicked();


 private:
	void Init();

 private:
	Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
