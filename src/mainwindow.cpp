#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Programa de aprendizado");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Autenticador_clicked()
{   QString loginadmin = "admin";
    QString senhaadmin = "admin";
//    QString nome = "Administrador";
    QString login = ui->Login_texto->text();
    QString senha = ui->Senha_texto->text();
    if(login == loginadmin && senha==senhaadmin){
        posautentic=new PosAutenticarTelaPrincipal(this);
        posautentic->show();
    }else{
        QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
        ui->Login_texto->clear();
        ui->Senha_texto->clear();
        ui->Login_texto->setFocus();
    }
    //QMessageBox::StandardButton resposta = QMessageBox::question(this,"titulo", "Pergunta?",QMessageBox::Yes,|QMessageBox::No);
    //if(resposta == QMessageBox::Yes)
    //façatalcoisa


}

void MainWindow::on_BotaoDeTeste_clicked()
{
//    QMessageBox::critical(this,"",this->)
    close();
    //fechando e abrindo a segunda janela, como um novo objeto, usando o this pq tá inclusa no .h
    posautentic=new PosAutenticarTelaPrincipal(this);
    posautentic->show();
}
