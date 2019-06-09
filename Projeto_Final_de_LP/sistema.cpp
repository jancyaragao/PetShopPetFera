#include "sistema.h"
#include "ui_sistema.h"

sistema::sistema(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sistema)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTodos os direitos reservados a JanLoTi Corporation™");
    QString nome_de_usuario = "admin";
    QString senha_do_usuario = "admin";
    QString cargo_do_usuario = "Administrador de testes";
    QString nome_de_registro_do_usuario = "Administrador JanLoTi Corporation";
    QString foto = ":/imagens/Imagens/photo.jpg";
    QString cpf = "";
    QString especialidade= "";
    short int idade = 14;
    id_counter++;
    dados.insert(id_counter,new dados_usuario(nome_de_registro_do_usuario,nome_de_usuario,cargo_do_usuario,senha_do_usuario,foto,cpf,especialidade,idade));
}
sistema::~sistema()
{
    delete ui;
}
int sistema::id_counter = 0;

void sistema::on_btn_entrar_clicked()
{
    QString login = ui->usuario_txt->text();
    QString senha = ui->senha_txt->text();
    for (auto &it:dados){
        if(QString::compare(login,it->get_usuario())==0 && QString::compare(senha,it->get_senha())==0){
            this->close();
            TelaPrincipalPointer=new TelaMenuPrincipal(this);
            TelaPrincipalPointer->RecebeNome(it->get_nome_oficial_usuario(),it->get_funcao_usuario(),it->get_foto3x4());
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
         QMessageBox::critical(this,"Problemas", "Sistema sem usuarios cadastrados, contacte o suporte da Janloti corporation");
         login = "";
         senha = "";
     }
}

void sistema::on_btn_testador_clicked()
{
    TelaPrincipalPointer=new TelaMenuPrincipal(this);
    TelaPrincipalPointer->show();
}
//void sistema::registrar_usuario(QString nome_, QString funcao_, QString senha_, QString foto3x4_, QString cpf_, QString especialidade_,short int idade_, int nivel_de_seguranca_){
////    dados.push_back(new dados_usuario(id_,nome_,funcao_,senha_, foto3x4_,cpf_,especialidade_,idade_,nivel_de_seguranca_));
//}
