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

}

void InputDialog::on_gps_xml_clicked()
{

}

void InputDialog::on_gps_2_clicked()
{

}

//void InputDialog::to_mainwindow(QString s)
//{
//	emit to_mainwindow(s);
//}
