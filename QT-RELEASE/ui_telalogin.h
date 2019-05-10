/********************************************************************************
** Form generated from reading UI file 'telalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALOGIN_H
#define UI_TELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_telaLogin
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *usuario_txt;
    QLineEdit *senha_txt;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_entrar;
    QPushButton *btn_testador;
    QLabel *label;
    QLabel *Imagem_login;
    QPushButton *btn_Criar_Usuario;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *telaLogin)
    {
        if (telaLogin->objectName().isEmpty())
            telaLogin->setObjectName(QString::fromUtf8("telaLogin"));
        telaLogin->resize(350, 350);
        telaLogin->setMinimumSize(QSize(350, 350));
        telaLogin->setMaximumSize(QSize(350, 350));
        telaLogin->setSizeIncrement(QSize(350, 350));
        telaLogin->setBaseSize(QSize(350, 350));
        telaLogin->setAutoFillBackground(false);
        centralWidget = new QWidget(telaLogin);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 291, 130));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usuario_txt = new QLineEdit(layoutWidget);
        usuario_txt->setObjectName(QString::fromUtf8("usuario_txt"));
        usuario_txt->setAutoFillBackground(false);
        usuario_txt->setClearButtonEnabled(true);

        gridLayout->addWidget(usuario_txt, 0, 1, 1, 1);

        senha_txt = new QLineEdit(layoutWidget);
        senha_txt->setObjectName(QString::fromUtf8("senha_txt"));
        senha_txt->setEchoMode(QLineEdit::Password);
        senha_txt->setClearButtonEnabled(true);

        gridLayout->addWidget(senha_txt, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_entrar = new QPushButton(layoutWidget);
        btn_entrar->setObjectName(QString::fromUtf8("btn_entrar"));
        btn_entrar->setAcceptDrops(true);

        verticalLayout->addWidget(btn_entrar);

        btn_testador = new QPushButton(layoutWidget);
        btn_testador->setObjectName(QString::fromUtf8("btn_testador"));

        verticalLayout->addWidget(btn_testador);


        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Imagem_login = new QLabel(centralWidget);
        Imagem_login->setObjectName(QString::fromUtf8("Imagem_login"));
        Imagem_login->setGeometry(QRect(120, 30, 111, 61));
        Imagem_login->setAlignment(Qt::AlignCenter);
        btn_Criar_Usuario = new QPushButton(centralWidget);
        btn_Criar_Usuario->setObjectName(QString::fromUtf8("btn_Criar_Usuario"));
        btn_Criar_Usuario->setGeometry(QRect(130, 260, 113, 32));
        telaLogin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(telaLogin);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 22));
        telaLogin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(telaLogin);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        telaLogin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(telaLogin);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        font.setItalic(true);
        statusBar->setFont(font);
        telaLogin->setStatusBar(statusBar);

        retranslateUi(telaLogin);

        QMetaObject::connectSlotsByName(telaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *telaLogin)
    {
        telaLogin->setWindowTitle(QApplication::translate("telaLogin", "Pet Shop Management", nullptr));
        label_2->setText(QApplication::translate("telaLogin", "Senha:", nullptr));
        btn_entrar->setText(QApplication::translate("telaLogin", "Entrar", nullptr));
        btn_testador->setText(QApplication::translate("telaLogin", "Botao Testador", nullptr));
        label->setText(QApplication::translate("telaLogin", "Usuario:", nullptr));
        Imagem_login->setText(QApplication::translate("telaLogin", "IMAGEM AQUI", nullptr));
        btn_Criar_Usuario->setText(QApplication::translate("telaLogin", "Criar Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaLogin: public Ui_telaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALOGIN_H
