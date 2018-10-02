/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *dis_mainwindow;
    QVBoxLayout *verticalLayout;
    QPushButton *openfile;
    QPushButton *deletefile;
    QPushButton *inputfilepath;
    QPushButton *deal_with;
    QPushButton *display;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(472, 365);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 26, 411, 261));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        dis_mainwindow = new QTextBrowser(layoutWidget);
        dis_mainwindow->setObjectName(QStringLiteral("dis_mainwindow"));

        horizontalLayout->addWidget(dis_mainwindow);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        openfile = new QPushButton(layoutWidget);
        openfile->setObjectName(QStringLiteral("openfile"));

        verticalLayout->addWidget(openfile);

        deletefile = new QPushButton(layoutWidget);
        deletefile->setObjectName(QStringLiteral("deletefile"));

        verticalLayout->addWidget(deletefile);

        inputfilepath = new QPushButton(layoutWidget);
        inputfilepath->setObjectName(QStringLiteral("inputfilepath"));

        verticalLayout->addWidget(inputfilepath);

        deal_with = new QPushButton(layoutWidget);
        deal_with->setObjectName(QStringLiteral("deal_with"));

        verticalLayout->addWidget(deal_with);

        display = new QPushButton(layoutWidget);
        display->setObjectName(QStringLiteral("display"));

        verticalLayout->addWidget(display);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 472, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openfile->setText(QApplication::translate("MainWindow", "openfile", Q_NULLPTR));
        deletefile->setText(QApplication::translate("MainWindow", "deletefile", Q_NULLPTR));
        inputfilepath->setText(QApplication::translate("MainWindow", "filepath", Q_NULLPTR));
        deal_with->setText(QApplication::translate("MainWindow", "deal_with", Q_NULLPTR));
        display->setText(QApplication::translate("MainWindow", "display", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
