#include "inputdialog.h"
#include "ui_inputdialog.h"
#include <QFileDialog>
#include <QFile>

InputDialog::InputDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputDialog)
{
    ui->setupUi(this);
}

InputDialog::~InputDialog()
{
    delete ui;
}

void InputDialog::on_source_clicked()
{
    in_filename = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("文件"), "", tr("text(*.txt)"));
    ui->textBrowser->append(QString::fromLocal8Bit("源文件路径：")+in_filename);
	//to_mainwindow(in_filename);
}

void InputDialog::on_gps_pos_clicked()
{
         gps_pos_dir = QFileDialog::getExistingDirectory(this, QString::fromLocal8Bit("保存GPStemp"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
         ui->textBrowser->append(QString::fromLocal8Bit("保存GPStemp路径：")+gps_pos_dir);
}

void InputDialog::on_gps_xml_clicked()
{
    mode_dir = QFileDialog::getExistingDirectory(this, QString::fromLocal8Bit("保存GPStemp"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->textBrowser->append(QString::fromLocal8Bit("保存GPStemp路径：")+mode_dir);
}

void InputDialog::on_gps_2_clicked()
{
    result_dir = QFileDialog::getExistingDirectory(this, QString::fromLocal8Bit("保存result"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->textBrowser->append(QString::fromLocal8Bit("result路径：")+result_dir);
}


