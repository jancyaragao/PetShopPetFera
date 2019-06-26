#include "cadastro_animal.h"
#include "ui_cadastro_animal.h"
#include <QMessageBox>
#include <QDate>
#include "sistema.h"
cadastro_animal::cadastro_animal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastro_animal)
{
    ui->setupUi(this);
    //escondendo itens de anfibio
    ui->label_total_de_mudas->hide();
    ui->m_total_de_mudas_spin_box->hide();
    ui->label_ultima_muda->hide();
    ui->m_data_ultima_muda_txt_data_box->hide();
    //escondendo itens de mamifero
    ui->label_cor_do_pelo->hide();
    ui->m_cor_do_pelo_txt->hide();
    //escondeno itens de reptil
    ui->label_venenoso->hide();
    ui->m_venenoso_txt->hide();
    ui->label_tipo_veneno->hide();
    ui->m_tipo_veneno_txt->hide();
    //escodendo itens de ave
    ui->label_tamanho_bico->hide();
    ui->m_tamanho_do_bico_txt_spin_box->hide();
    ui->label_envergadura_das_asas->hide();
    ui->m_envergadura_das_asas_txt_spin_box->hide();
    //escondendo itens de nativo
    ui->label_uf_origem->hide();
    ui->m_uf_origem->hide();
    //escondendo itens de exotico
    ui->label_pais_de_origem->hide();
    ui->m_pais_origem->hide();
    ui->label_cidade_de_origem->hide();
    ui->m_cidade_origem->hide();
    //escondendo item ibama
    ui->label_autorizacao_ibama->hide();
    ui->m_autorizacao_ibama->hide();




}

cadastro_animal::~cadastro_animal()
{
    delete ui;
}

void cadastro_animal::on_buttonBox_rejected()
{
    this->close();
}

void cadastro_animal::on_m_classe_txt_combo_box_currentTextChanged(const QString &arg1)
{
    if(QString::compare(arg1,"Ave")==0){
        //escondendo itens de anfibio
        ui->label_total_de_mudas->hide();
        ui->m_total_de_mudas_spin_box->hide();
        ui->label_ultima_muda->hide();
        ui->m_data_ultima_muda_txt_data_box->hide();
        //escondendo itens de mamifero
        ui->label_cor_do_pelo->hide();
        ui->m_cor_do_pelo_txt->hide();
        //escondeno itens de reptil
        ui->label_venenoso->hide();
        ui->m_venenoso_txt->hide();
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
        //aparecendo itens de ave
        ui->label_tamanho_bico->show();
        ui->m_tamanho_do_bico_txt_spin_box->show();
        ui->label_envergadura_das_asas->show();
        ui->m_envergadura_das_asas_txt_spin_box->show();
    }
    else if(QString::compare(arg1,"Anfíbio")==0){
        //aparecendo itens de anfibio
        ui->label_total_de_mudas->show();
        ui->m_total_de_mudas_spin_box->show();
        ui->label_ultima_muda->show();
        ui->m_data_ultima_muda_txt_data_box->show();
        //escondendo itens de mamifero
        ui->label_cor_do_pelo->hide();
        ui->m_cor_do_pelo_txt->hide();
        //escondeno itens de reptil
        ui->label_venenoso->hide();
        ui->m_venenoso_txt->hide();
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
        //escodendo itens de ave
        ui->label_tamanho_bico->hide();
        ui->m_tamanho_do_bico_txt_spin_box->hide();
        ui->label_envergadura_das_asas->hide();
        ui->m_envergadura_das_asas_txt_spin_box->hide();

    }
    else if(QString::compare(arg1,"Reptil")==0){
        //escondendo itens de anfibio
        ui->label_total_de_mudas->hide();
        ui->m_total_de_mudas_spin_box->hide();
        ui->label_ultima_muda->hide();
        ui->m_data_ultima_muda_txt_data_box->hide();
        //escondendo itens de mamifero
        ui->label_cor_do_pelo->hide();
        ui->m_cor_do_pelo_txt->hide();
        //aparecendo itens de reptil
        ui->label_venenoso->show();
        ui->m_venenoso_txt->show();
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
        //escodendo itens de ave
        ui->label_tamanho_bico->hide();
        ui->m_tamanho_do_bico_txt_spin_box->hide();
        ui->label_envergadura_das_asas->hide();
        ui->m_envergadura_das_asas_txt_spin_box->hide();
    }
    else if(QString::compare(arg1,"Mamifero")==0){
        //escondendo itens de anfibio
        ui->label_total_de_mudas->hide();
        ui->m_total_de_mudas_spin_box->hide();
        ui->label_ultima_muda->hide();
        ui->m_data_ultima_muda_txt_data_box->hide();
        //escondendo itens de mamifero
        ui->label_cor_do_pelo->show();
        ui->m_cor_do_pelo_txt->show();
        //escondeno itens de reptil
        ui->label_venenoso->hide();
        ui->m_venenoso_txt->hide();
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
        //escodendo itens de ave
        ui->label_tamanho_bico->hide();
        ui->m_tamanho_do_bico_txt_spin_box->hide();
        ui->label_envergadura_das_asas->hide();
        ui->m_envergadura_das_asas_txt_spin_box->hide();


    }
    else{
        //Caso nenhuma opção seja selecionada, tudo irá desaparecer.
        //escondendo itens de anfibio
        ui->label_total_de_mudas->hide();
        ui->m_total_de_mudas_spin_box->hide();
        ui->label_ultima_muda->hide();
        ui->m_data_ultima_muda_txt_data_box->hide();
        //escondendo itens de mamifero
        ui->label_cor_do_pelo->hide();
        ui->m_cor_do_pelo_txt->hide();
        //escondeno itens de reptil
        ui->label_venenoso->hide();
        ui->m_venenoso_txt->hide();
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
        //escodendo itens de ave
        ui->label_tamanho_bico->hide();
        ui->m_tamanho_do_bico_txt_spin_box->hide();
        ui->label_envergadura_das_asas->hide();
        ui->m_envergadura_das_asas_txt_spin_box->hide();

    }
}

void cadastro_animal::on_m_venenoso_txt_currentTextChanged(const QString &arg1)
{
    if(QString::compare(arg1,"Sim")==0){
        ui->label_tipo_veneno->show();
        ui->m_tipo_veneno_txt->show();
    }
    else{
        ui->label_tipo_veneno->hide();
        ui->m_tipo_veneno_txt->hide();
    }
}

void cadastro_animal::on_buttonBox_accepted()
{   //trocar id, 1 é para testes.
    int m_id = 1;
//    int veterinario_teste = 5;
    //Atribuição das váriaveis todos os dados possíveis.
    QString m_classe_animal = ui->m_classe_txt_combo_box->currentText();
    QString m_nome_animal_cientifico = ui->m_nome_cientifico_txt->text();
    QString sexo_animal = ui->m_sexo_txt_combo_box->currentText();
    char m_sexo_animal = '\0';
    if(QString::compare(sexo_animal,"M")==0){
        m_sexo_animal ='M';
    }
    else if(QString::compare(sexo_animal,"F")==0){
        m_sexo_animal ='F';
    }
    double m_tamanho = ui->m_tamanho_txt_spin_box->value();
    QString m_dieta = ui->m_dieta_txt->text();
    QString m_nome_batismo = ui->m_nome_de_bastismo_txt->text();
    int m_veterinario = ui->m_veterinario_txt_spin_box->value();
    int m_tratador = ui->m_tratador_txt_spin_box->value();
    int m_total_de_mudas = ui->m_total_de_mudas_spin_box->value();
    //QDate m_ultima_muda = ui->m_ultima_muda;
    //IF AQUI EM BAIXO
    QString m_tipo = ui->m_tipo_txt_combo_box->currentText();
    QString m_cor_de_pelo = ui->m_cor_do_pelo_txt->text();
    QString venenoso = ui->m_venenoso_txt->currentText();
    bool m_venenoso;
    if(QString::compare(venenoso,"S")==0){
        m_venenoso = true;
    }
    else{
        m_venenoso = false;
    }
    QString m_tipo_venenoso = ui->m_tipo_veneno_txt->text();
    double m_tamanho_do_bico = ui->m_tamanho_do_bico_txt_spin_box->value();
    double m_envergadura_das_asas = ui->m_envergadura_das_asas_txt_spin_box->value();
    QString m_uf_origem = ui->m_uf_origem->text();
    QString m_pais_origem = ui->m_pais_origem->text();
    QString m_cidade_origem = ui->m_cidade_origem->text();
    QString m_autorizacao_ibama = ui->m_autorizacao_ibama->text();



    sistema enviar_para_sistema;
    if(QString::compare(m_classe_animal,"Ave")==0){
        if(QString::compare(m_tipo,"Nativo")==0){
            //veterinario esta int, era pra ser string de acordo com o UML
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_tamanho_do_bico,m_envergadura_das_asas,m_autorizacao_ibama,m_uf_origem);
        }
         else if(QString::compare(m_tipo,"Exótico")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_tamanho_do_bico,m_envergadura_das_asas,m_autorizacao_ibama,m_pais_origem,m_cidade_origem);
        }
    }
    //falta colocar o date nos anfibios
    else if(QString::compare(m_classe_animal,"Anfíbio")==0){

        if(QString::compare(m_tipo,"Nativo")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_total_de_mudas,m_autorizacao_ibama,m_uf_origem);
        }
        else if(QString::compare(m_tipo,"Exótico")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_total_de_mudas,m_autorizacao_ibama,m_pais_origem,m_cidade_origem);
        }
    }
    else if(QString::compare(m_classe_animal,"Mamifero")==0){
        if(QString::compare(m_tipo,"Nativo")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_cor_de_pelo,m_autorizacao_ibama,m_uf_origem);
        }
         else if(QString::compare(m_tipo,"Exótico")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_cor_de_pelo,m_autorizacao_ibama,m_pais_origem,m_cidade_origem);
        }
    }
    else if(QString::compare(m_classe_animal,"Reptil")==0){
        if(QString::compare(m_tipo,"Nativo")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_venenoso,m_tipo_venenoso,m_autorizacao_ibama,m_uf_origem);
        }
        else if(QString::compare(m_tipo,"Exótico")==0){
            enviar_para_sistema.cadastrar_animal(m_id,m_classe_animal,m_nome_animal_cientifico,m_sexo_animal,m_tamanho,m_dieta,m_veterinario,m_tratador,m_nome_batismo,m_venenoso,m_tipo_venenoso,m_autorizacao_ibama,m_pais_origem,m_cidade_origem);
        }
    }
    this->close();
}

void cadastro_animal::on_m_tipo_txt_combo_box_currentTextChanged(const QString &arg1)
{
    if(QString::compare(arg1,"Nativo")==0){
        //escondendo itens de nativo
        ui->label_uf_origem->show();
        ui->m_uf_origem->show();
        //escondendo itens de exotico
        ui->label_pais_de_origem->hide();
        ui->m_pais_origem->hide();
        ui->label_cidade_de_origem->hide();
        ui->m_cidade_origem->hide();
        //escondendo item ibama
        ui->label_autorizacao_ibama->show();
        ui->m_autorizacao_ibama->show();

    }
    else if(QString::compare(arg1,"Exótico")==0){
        //escondendo itens de nativo
        ui->label_uf_origem->hide();
        ui->m_uf_origem->hide();
        //escondendo itens de exotico
        ui->label_pais_de_origem->show();
        ui->m_pais_origem->show();
        ui->label_cidade_de_origem->show();
        ui->m_cidade_origem->show();
        //escondendo item ibama
        ui->label_autorizacao_ibama->show();
        ui->m_autorizacao_ibama->show();

    }
    else {
        //escondendo itens de nativo
        ui->label_uf_origem->hide();
        ui->m_uf_origem->hide();
        //escondendo itens de exotico
        ui->label_pais_de_origem->hide();
        ui->m_pais_origem->hide();
        ui->label_cidade_de_origem->hide();
        ui->m_cidade_origem->hide();
        //escondendo item ibama
        ui->label_autorizacao_ibama->hide();
        ui->m_autorizacao_ibama->hide();

    }
}



void cadastro_animal::on_m_id_spin_editingFinished()
{
//    int recebedor_id_animal = ui->m_id_animal-
}
