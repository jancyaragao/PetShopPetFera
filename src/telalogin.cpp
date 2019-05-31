#include "telalogin.h"
#include "ui_telalogin.h"

telaLogin::telaLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telaLogin)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTodos os direitos reservados a JanLoTi Corporation™");
    int id = 2019100;
    QString nome_de_usuario = "admin";
    QString senha_do_usuario = "admin";
    QString cargo_do_usuario = "Administrador de testes";
    QString nome_de_registro_do_usuario = "Administrador JanLoTi Corporation";
    QString foto = ":/imagens/Imagens/photo.jpg";
    QString cpf = "";
    QString especialidade= "";
    short int idade = 14;
    dados.push_back(new dados_usuario(id,nome_de_registro_do_usuario,nome_de_usuario,cargo_do_usuario,senha_do_usuario,foto,cpf,especialidade,idade));
}

telaLogin::~telaLogin()
{
    delete ui;
}

void telaLogin::on_btn_Criar_Usuario_clicked()
{
    int id = 2019100;
    QString nome_de_usuario = "admin";
    QString senha_do_usuario = "admin";
    QString cargo_do_usuario = "Administrador de testes";
    QString nome_de_registro_do_usuario = "Administrador JanLoTi Corporation";
    QString foto = ":/imagens/Imagens/photo.jpg";
    QString cpf = "";
    QString especialidade= "";
    short int idade = 14;
    dados.push_back(new dados_usuario(id,nome_de_registro_do_usuario,nome_de_usuario,cargo_do_usuario,senha_do_usuario,foto,cpf,especialidade,idade));
    QMessageBox::critical(this,"", "Adicionados");
}

void telaLogin::on_btn_entrar_clicked()
{
    QString login = ui->usuario_txt->text();
    QString senha = ui->senha_txt->text();
     for(int i = 0; i < dados.size(); i++){
        if(QString::compare(login,dados[i]->get_usuario())==0 && QString::compare(senha,dados[i]->get_senha())==0){
            this->close();
            TelaPrincipalPointer=new TelaMenuPrincipal(this);
            TelaPrincipalPointer->RecebeNome(dados[i]->get_nome_oficial_usuario(),dados[i]->get_funcao_usuario(),dados[i]->get_foto3x4());
            TelaPrincipalPointer->showMaximized();
        }
        else{
            QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
            ui->usuario_txt->clear();
            ui->senha_txt->clear();
            ui->usuario_txt->setFocus();
            login = "";
            senha = "";
        }
    }
     if(dados.size()==0){
         QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
         login = "";
         senha = "";
     }
}

void telaLogin::on_btn_testador_clicked()
{
    TelaPrincipalPointer=new TelaMenuPrincipal(this);
    TelaPrincipalPointer->show();
}
void telaLogin::registrar_usuario(int id_, QString nome_, QString funcao_, QString senha_, QString foto3x4_, QString cpf_, QString especialidade_,short int idade_, int nivel_de_seguranca_){
//    dados.push_back(new dados_usuario(id_,nome_,funcao_,senha_, foto3x4_,cpf_,especialidade_,idade_,nivel_de_seguranca_));
}
