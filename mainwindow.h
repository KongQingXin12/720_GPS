#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QFileInfo>
#include "GPStxt_834.h"
#include "inputdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openfile_clicked();

    void on_deletefile_clicked();

    void on_deal_with_clicked();

    void on_display_clicked();

    void on_inputfilepath_clicked();
private:
    Ui::MainWindow *ui;
    Dialog *dialog;//窗口1
    InputDialog *inputdialog;//窗口2
    QString filename;//文件名
    vector<string> dir;//处理数组输出
    QString resultFilename;//输出文件路径

	string source;
	string gps_pos;
    string gps_xml;
	string gps;
};

#endif // MAINWINDOW_H
