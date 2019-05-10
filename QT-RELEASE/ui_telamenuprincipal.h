/********************************************************************************
** Form generated from reading UI file 'telamenuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAMENUPRINCIPAL_H
#define UI_TELAMENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaMenuPrincipal
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaMenuPrincipal)
    {
        if (TelaMenuPrincipal->objectName().isEmpty())
            TelaMenuPrincipal->setObjectName(QString::fromUtf8("TelaMenuPrincipal"));
        TelaMenuPrincipal->resize(711, 600);
        centralwidget = new QWidget(TelaMenuPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TelaMenuPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaMenuPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 711, 22));
        TelaMenuPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaMenuPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaMenuPrincipal->setStatusBar(statusbar);

        retranslateUi(TelaMenuPrincipal);

        QMetaObject::connectSlotsByName(TelaMenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaMenuPrincipal)
    {
        TelaMenuPrincipal->setWindowTitle(QApplication::translate("TelaMenuPrincipal", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaMenuPrincipal: public Ui_TelaMenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAMENUPRINCIPAL_H
