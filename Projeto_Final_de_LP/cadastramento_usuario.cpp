#include "cadastramento_usuario.h"
#include "ui_cadastramento_usuario.h"
#include <QMessageBox>
#include <sistema.h>

cadastramento_usuario::cadastramento_usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastramento_usuario)
{
    ui->setupUi(this);
}

cadastramento_usuario::~cadastramento_usuario()
{
    delete ui;

}


void cadastramento_usuario::on_buttonBox_rejected()
{
    this->close();
}

void cadastramento_usuario::on_buttonBox_accepted()
{
    QString nome_a_ser_cadastrado = ui->line_nome_2->text();
    QString cpf_a_ser_cadastrado = ui->line_cpf->text();
    QString foto_a_ser_cadastrada ="";
    int idade = ui->spinBox_idade->value();
    QString funcao = ui->combo_box_funcoes->currentText();
    QString especialidade = ui->especialidade_line->text();
    QString tipo_sanguineo_a_ser_cadastrado = ui->combo_box2_sangues->currentText();
    QString codigo_crmv_a_ser_cadastrado = ui->especialidade_line_2->text();
    QString nivel_de_seg = ui->nv_seg_box->currentText();
    QMessageBox::critical(this,"problemas", nome_a_ser_cadastrado+cpf_a_ser_cadastrado+foto_a_ser_cadastrada+idade+funcao+especialidade+tipo_sanguineo_a_ser_cadastrado+codigo_crmv_a_ser_cadastrado+nivel_de_seg);
    this->close();

}
//fazer um set para enviar os dados para sistema
