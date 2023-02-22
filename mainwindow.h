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
	int serial_bund;
	QSerialPort::StopBits serial_stopBit;
	QSerialPort::DataBits  serial_Data;
	QSerialPort port;

 private slots:
	void on_btnOpen_clicked();
	void on_btnClose_clicked();

 private:
	void Init();

 private:
	Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
