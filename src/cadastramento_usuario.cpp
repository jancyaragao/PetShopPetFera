#include "cadastramento_usuario.h"
#include "ui_cadastramento_usuario.h"
#include <QMessageBox>
#include <sistema.h>

cadastramento_usuario::cadastramento_usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastramento_usuario)
{
    ui->setupUi(this);
    ui->box_cod_crmv->hide();
    ui->nv_seg_box->hide();
    ui->nv_seg_label->hide();
    ui->codigo_crmv_label->hide();
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
{   this->close();
    sistema sendsistema;
    QString nome_a_ser_cadastrado = ui->line_nome_2->text();
    QString cpf_a_ser_cadastrado = ui->line_cpf->text();
    QString foto_a_ser_cadastrada ="";
    short idade = ui->spinBox_idade->value();
    QString funcao = ui->combo_box_funcoes->currentText();
    QString especialidade = ui->especialidade_line->text();
    QString tipo_sanguineo_a_ser_cadastrado = ui->combo_box2_sangues->currentText();
    QString codigo_crmv_a_ser_cadastrado = ui->box_cod_crmv->text();
    QString nivel_de_seg = ui->nv_seg_box->currentText();
//    sendsistema.registrar_usuario(nome_a_ser_cadastrado,
//                                  cpf_a_ser_cadastrado,foto_a_ser_cadastrada,
//                                  idade,funcao,especialidade,tipo_sanguineo_a_ser_cadastrado,codigo_crmv_a_ser_cadastrado,nivel_de_seg);
}

//bool sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
//QString especialidade, int nivel_de_seguranca) {
//    Funcionario* novo = new Tratador(id, nome, cpf, idade, tipo_sanguineo, especialidade,
//    nivel_de_seguranca);
//    funcionarios.insert(id, novo);
//    return true;
//} /*cadastro tratador*/

//bool sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
//QString especialidade, QString crmv) {
//    Funcionario* novo = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, especialidade, crmv);
//    funcionarios.insert(id, novo);
//    return true;
//} /*cadastro veterinario*/
void cadastramento_usuario::on_combo_box_funcoes_currentTextChanged(const QString &arg1)
{
    if(QString::compare(arg1,"Veterinário")==0){
        ui->nv_seg_box->hide();
        ui->nv_seg_label->hide();
        ui->codigo_crmv_label->show();
        ui->box_cod_crmv->show();
    }
    else if(QString::compare(arg1,"Tratador")==0){
        ui->nv_seg_box->show();
        ui->nv_seg_label->show();
        ui->codigo_crmv_label->hide();
        ui->box_cod_crmv->hide();
    }
    else{
        ui->box_cod_crmv->hide();
        ui->nv_seg_box->hide();
        ui->nv_seg_label->hide();
        ui->codigo_crmv_label->hide();
    }
}

void cadastramento_usuario::on_m_id_editingFinished()
{
    QString recebedora_id = ui->m_id->text();

    bool verificadora_id;

}
