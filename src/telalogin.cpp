#include "telalogin.h"
#include "ui_telalogin.h"

telaLogin::telaLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telaLogin)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTodos os direitos reservados a JanLoTi Corporation™");
    ui->statusBar->lower();
}

telaLogin::~telaLogin()
{
    delete ui;
}

void telaLogin::on_btn_Criar_Usuario_clicked()
{
    QString nome_de_usuario = "admin";
    QString senha_do_usuario = "admin";
    QString cargo_do_usuario = "Administrador de testes";
    QString nome_de_registro_do_usuario = "Administrador JanLoTi Corporation";
    dados.push_back(new dados_usuario(nome_de_registro_do_usuario,nome_de_usuario,cargo_do_usuario,senha_do_usuario));
    QMessageBox::critical(this,"", "Adicionados");
}

void telaLogin::on_btn_entrar_clicked()
{
    QString login = ui->usuario_txt->text();
    QString senha = ui->senha_txt->text();
     for(int i = 0; i < dados.size(); i++){
        if(login == dados[i]->get_usuario() && login == dados[i]->get_senha()){
            TelaPrincipalPointer=new TelaMenuPrincipal(this);
            TelaPrincipalPointer->show();
        }

        else{
            QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
            ui->usuario_txt->clear();
            ui->senha_txt->clear();
            ui->usuario_txt->setFocus();
        }

    }
     if(dados.size()==0 ){
         QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
     }
}
