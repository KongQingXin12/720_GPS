#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"
#include "readtxt.h"
#include "inputdialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openfile_clicked()
{
    filename = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("文件"), "", tr("text(*.txt)"));
    ui->dis_mainwindow->append(QString::fromLocal8Bit("源文件路径：")+filename);
    /*
    filename=input;
     InputDialog *input=new InputDialog();
        //关联信号和函数
        connect(input,SIGNAL(input_to_mainwindow(QString)),this,SLOT(receDatafrom_inputdialog(QString)));


    filename=input->in_filename;
    source=filename.toStdString();
    QString temp=input->gps_pos_dir;
    ui->dis_mainwindow->append(temp);
    gps_pos=temp.toStdString();
    temp=input->result_dir;
    ui->dis_mainwindow->append(temp);
    gps=temp.toStdString();

    filename=QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("文件"), "", tr("text(*.txt)"));
    ui->dis_mainwindow->append(filename);
    */
}

void MainWindow::on_deletefile_clicked()
{

}


void MainWindow::on_deal_with_clicked()
{

    //提取文件内容
    vector<string>tou;
    QFile file(filename);
    //读取文件路径
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while (!file.atEnd())
            {
                QByteArray line = file.readLine();
                QString str(line);
                string str1(str.toStdString());
                if (str1.find("\n") != string::npos)
                {
                    str1.erase(str1.length() - 1);
                }
                tou.push_back(str1);
            }

        }

    source = tou[0];//源文件路径
    gps_pos = tou[1];//中间阶段处理时GPS值存储路径(txt格式)
    gps_xml = tou[2];// 中间阶段处理时GPS值存储路径(xml格式)
    gps = tou[3];//

    //对打开文件进行处理
    readtxt s(source,gps_pos);
    s.trans();
    GPStxt_834 s1(gps_pos, gps);
    dir = s1.deal_pos();
    if(dir.size()!=0)
        ui->dis_mainwindow->append(QString::fromLocal8Bit("处理完成"));
    else
        ui->dis_mainwindow->append(QString::fromLocal8Bit("处理失败"));

}


void MainWindow::on_display_clicked()
{
    //建立输出文件路径
    resultFilename = QString::fromStdString(gps + "result.txt");

    QFile dir_file(resultFilename);
    dir_file.resize(0);	//清空缓存文件
    for (int i = 0; i < dir.size(); i++)
    {
        QFile dir_file(resultFilename);
        if (dir_file.open(QFile::Append|QFile::WriteOnly | QFile::Text))
        {
            QTextStream write(&dir_file);
            write << QString::fromStdString(dir[i]) << "\n";
            write.flush();
        }
        else
        {
            QMessageBox::warning(this, tr("Error"), tr("read file error:&1").arg(dir_file.errorString()));
            return;
        }

    }

    //显示文件目录
    if (!resultFilename.isNull())
    {
        QFile file(resultFilename);
        if (!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this, tr("Error"), tr("read file error:&1").arg(file.errorString()));
            return;
        }
        QTextStream in(&file);
        //QApplication::setOverrideCursor(Qt::WaitCursor);//强制光标为静态
        dialog = new Dialog(this);

        //dialog->setModal(false);
        dialog->ui->showresult->append(in.readAll());
        QApplication::restoreOverrideCursor();
        dialog->show();
    }
    else
    {
        qDebug() << "取消";
    }



}

void MainWindow::on_inputfilepath_clicked()
{
    inputdialog=new InputDialog(this);
    inputdialog->show();
}
