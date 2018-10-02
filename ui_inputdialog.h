/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_source;
    QLineEdit *linr_gps_pos;
    QLineEdit *line_mode;
    QLineEdit *line_result;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *source;
    QPushButton *gps_pos;
    QPushButton *gps_xml;
    QPushButton *gps_2;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName(QStringLiteral("InputDialog"));
        InputDialog->resize(1205, 411);
        widget = new QWidget(InputDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(690, 180, 441, 191));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_source = new QLineEdit(widget);
        line_source->setObjectName(QStringLiteral("line_source"));

        verticalLayout_2->addWidget(line_source);

        linr_gps_pos = new QLineEdit(widget);
        linr_gps_pos->setObjectName(QStringLiteral("linr_gps_pos"));

        verticalLayout_2->addWidget(linr_gps_pos);

        line_mode = new QLineEdit(widget);
        line_mode->setObjectName(QStringLiteral("line_mode"));

        verticalLayout_2->addWidget(line_mode);

        line_result = new QLineEdit(widget);
        line_result->setObjectName(QStringLiteral("line_result"));

        verticalLayout_2->addWidget(line_result);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(InputDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 20, 491, 331));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(widget1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        source = new QPushButton(widget1);
        source->setObjectName(QStringLiteral("source"));

        horizontalLayout_2->addWidget(source);

        gps_pos = new QPushButton(widget1);
        gps_pos->setObjectName(QStringLiteral("gps_pos"));

        horizontalLayout_2->addWidget(gps_pos);

        gps_xml = new QPushButton(widget1);
        gps_xml->setObjectName(QStringLiteral("gps_xml"));

        horizontalLayout_2->addWidget(gps_xml);

        gps_2 = new QPushButton(widget1);
        gps_2->setObjectName(QStringLiteral("gps_2"));

        horizontalLayout_2->addWidget(gps_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(InputDialog);

        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QApplication::translate("InputDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("InputDialog", "\346\272\220\346\226\207\344\273\266\350\267\257\345\276\204", Q_NULLPTR));
        label_2->setText(QApplication::translate("InputDialog", "GPS\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_3->setText(QApplication::translate("InputDialog", "GPS(xml)\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
        label_4->setText(QApplication::translate("InputDialog", "\350\260\267\346\255\214\345\234\260\345\233\276\351\242\204\345\244\204\347\220\206\346\226\207\344\273\266\350\267\257\345\276\204", Q_NULLPTR));
        source->setText(QApplication::translate("InputDialog", "\346\211\223\345\274\200\346\272\220\346\226\207\344\273\266", Q_NULLPTR));
        gps_pos->setText(QApplication::translate("InputDialog", "GPStemp", Q_NULLPTR));
        gps_xml->setText(QApplication::translate("InputDialog", "GPS_xml", Q_NULLPTR));
        gps_2->setText(QApplication::translate("InputDialog", "\345\255\230\345\202\250\350\267\257\345\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H
