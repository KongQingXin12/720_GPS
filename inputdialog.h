#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>

namespace Ui {
class InputDialog;
}

class InputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputDialog(QWidget *parent = 0);
    ~InputDialog();

//private:
    Ui::InputDialog *ui;
    QString	in_filename;
    QString result_dir;
    QString gps_pos_dir;
    QString mode_dir;
signals:
    void input_to_mainwindow(QString);
private slots:
    void on_source_clicked();
    void on_gps_pos_clicked();
    void on_gps_xml_clicked();
    void on_gps_2_clicked();

};

#endif // INPUTDIALOG_H
