#include "telamenuprincipal.h"
#include "ui_telamenuprincipal.h"

TelaMenuPrincipal::TelaMenuPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaMenuPrincipal)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTodos os direitos reservados a JanLoTi Corporation™");
}

TelaMenuPrincipal::~TelaMenuPrincipal()
{
    delete ui;
}
void TelaMenuPrincipal::RecebeNome(QString Nome_CP, QString Cargo_CP, QString foto_cp){

    ui->label_nome->setText("Bem vindo(a) "+ Nome_CP);
    ui->label_nome->adjustSize();
    ui->label_cargo->setText("Cargo: "+Cargo_CP);
    ui->label_cargo->adjustSize();
    QPixmap foto_perfil(foto_cp);
    ui->foto_inicial->setPixmap(foto_perfil);
}

void TelaMenuPrincipal::on_btn_logoff_clicked()
{
   this->close();
}

void TelaMenuPrincipal::on_btn_criar_usuario_clicked()
{
    TelaCadastroPointer= new cadastramento_usuario(this);
    TelaCadastroPointer->show();
}

void TelaMenuPrincipal::on_btn_logoff_2_clicked()
{
    TelaAnimaisPointer = new telaanimais(this);
    TelaAnimaisPointer->show();
}
