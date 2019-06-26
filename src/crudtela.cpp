#include "crudtela.h"
#include "ui_crudtela.h"
#include "sistema.h"
#include <QMap>
#include <QMessageBox>
#include <QTextStream>

CrudTela::CrudTela(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudTela)
{
    ui->setupUi(this);
}

CrudTela::~CrudTela()
{
    delete ui;
}

void CrudTela::on_comboBox_Tipo_currentTextChanged(const QString &arg1)
{
    QStringList titulos_cabecalho;

    if(QString::compare(arg1,"Animal")==0){
        ui->tabela_animais_pessoas->setColumnCount(12);
        titulos_cabecalho << "ID" << "CLASSE" << "NOME CIENTIFICO" << "SEXO" << "TAMANHO" << "DIETA" << "VETERINARIO" <<"TRATADOR" << "NOME BATISMO";
        ui->tabela_animais_pessoas->setHorizontalHeaderLabels(titulos_cabecalho);
        sistema receber_listagem;
        QMap<int, Animal*> animais1Temp = receber_listagem.listagem();
      if(animais1Temp.size()==0){
            QMessageBox::critical(this,"problemas","ai tem problema");
        }

    }
    else if(QString::compare(arg1, "Funcionario")==0){
        ui->tabela_animais_pessoas->setColumnCount(9);
        titulos_cabecalho << "ID" << "NOME" << "CPF" << "IDADE" << "TIPO SANGUINEO" << "ESPECIALIDADE" << "COD. CNMV" << "NV. SEGURANÇA";
        ui->tabela_animais_pessoas->setHorizontalHeaderLabels(titulos_cabecalho);
    }
    else if(QString::compare(arg1, "")==0){
        ui->tabela_animais_pessoas->setColumnCount(0);
    }
}
