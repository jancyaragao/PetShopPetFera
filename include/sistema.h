#ifndef sistema_H
#define sistema_H

#include <QMainWindow>
#include <QString>
#include <QMap>
#include "dados_usuario.h"
#include "telamenuprincipal.h"
#include <QMessageBox>
#include <algorithm>
#include "animal.h"
#include "anfibio.h"
#include "anfibionativo.h"
#include "anfibioexotico.h"
#include "animalexotico.h"
#include "animalnativo.h"
#include "animalsilvestre.h"
#include "ave.h"
#include "aveexotico.h"
#include "avenativo.h"
#include "mamifero.h"
#include "mamiferoexotico.h"
#include "mamiferonativo.h"
#include "reptil.h"
#include "reptilexotico.h"
#include "reptilnativo.h"
#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

namespace Ui {
class sistema;
}

class sistema : public QMainWindow
{
    Q_OBJECT

public:
    explicit sistema(QWidget *parent = nullptr);
    ~sistema();

public:
    void salvarArquivoAnimais (void);

            bool verificaIdAnimal(int id);
            /*Verifica id existe em Animal*/

            bool verificaIdFuncionario(int id);
            /*Verifica id existe em Animal*/

            bool cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade, int nivel_de_seguranca);
            /*Cadastro Tratador*/

            bool cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade, QString crmv);
            /*Cadastro Veterinario*/

                bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo);
                /*Cadastrar Mamifero*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo,
                    QString autorizacao_ibama, QString uf_origem);
                    /*Cadastrar Mamifero Nativo*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo,
                    QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
                    /*Cadastrar Mamifero Exotico*/

                bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno);
                /*Cadastrar Reptil*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
                    QString tipo_veneno, QString autorizacao_ibama, QString uf_origem);
                    /*Cadastrar Reptil Nativo*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
                    QString tipo_veneno, QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
                    /*Cadastrar Reptil Exotico*/

                bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
                double envergadura_das_asas);
                /*Cadastrar Ave*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
                    double envergadura_das_asas, QString autorizacao_ibama, QString uf_origem);
                    /*Cadastrar Ave Nativa*/

                    bool cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
                    QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
                    double envergadura_das_asas, QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
                    /*Cadastrar Ave Exotica*/

                bool cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
                QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas);
                /*Cadastrar Anfibio*/

                    bool cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
                    QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
                    QString autorizacao_ibama, QString uf_origem);
                    /*Cadastrar Anfibio Nativio*/

                    bool cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
                    QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
                    QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
                    /*Cadastrar Anfibio Exotico*/

            // STUB ===>
            // remocao_animal ();
            // alteracao_dados_animal ();
            // consultar_animal ();
            // consultar_animal_por_func ();
            // STUB <===

        QMap <int, Animal*> listagem();

private slots:
    void on_btn_entrar_clicked();

    void on_btn_testador_clicked();

private:
    Ui::sistema *ui;
    /*Container contendo todos os animais*/
    QMap <int, Animal*> animais;
    /*Container contendo todos os funcionários*/
    QMap <int, Funcionario*> funcionarios;
    TelaMenuPrincipal *TelaPrincipalPointer;
};
#endif // sistema_H
