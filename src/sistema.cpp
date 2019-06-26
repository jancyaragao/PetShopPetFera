#include "sistema.h"
#include "ui_sistema.h"
#include <iostream>
sistema::sistema(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sistema)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tTodos os direitos reservados a JanLoTi Corporation™");
//    QString nome_de_usuario = "admin";
//    QString senha_do_usuario = "admin";
//    QString cargo_do_usuario = "Administrador de testes";
//    QString nome_de_registro_do_usuario = "Administrador JanLoTi Corporation";
//    QString foto = ":/imagens/Imagens/photo.jpg";
//    QString cpf = "";
//    QString especialidade= "";
//    short int idade = 14;
//    id_counter++;
//    dados.insert(id_counter,new dados_usuario(nome_de_registro_do_usuario,nome_de_usuario,cargo_do_usuario,senha_do_usuario,foto,cpf,especialidade,idade));

}
sistema::~sistema()
{
    delete ui;
}

void sistema::on_btn_entrar_clicked()
{
//    QString login = ui->usuario_txt->text();
//    QString senha = ui->senha_txt->text();
//    for (auto &it:dados){
//        if(QString::compare(login,it->get_usuario())==0 && QString::compare(senha,it->get_senha())==0){
//            this->close();
//            TelaPrincipalPointer=new TelaMenuPrincipal(this);
//            TelaPrincipalPointer->RecebeNome(it->get_nome_oficial_usuario(),it->get_funcao_usuario(),it->get_foto3x4());
//            TelaPrincipalPointer->show();
//        }
//        else{
//            QMessageBox::critical(this,"Problemas", "Login ou senha incorreto(s)");
//            ui->usuario_txt->clear();
//            ui->senha_txt->clear();
//            ui->usuario_txt->setFocus();
//            login = "";
//            senha = "";
//        }
//        }
//    if(dados.size()==0){
//         QMessageBox::critical(this,"Problemas", "sistema sem usuarios cadastrados, contacte o suporte da Janloti corporation");
//         login = "";
//         senha = "";
//     }
}

void sistema::on_btn_testador_clicked()
{
    this->close();
    TelaPrincipalPointer=new TelaMenuPrincipal(this);
//    TelaPrincipalPointer->RecebeNome();
    TelaPrincipalPointer->show();
}




void sistema::salvarArquivoAnimais(void){
    // for (auto it : animais){
    // 	cout << it[1].getNome_cientifico() << endl;
    // }
}

bool sistema::verificaIdAnimal(int id) {
    QMap<int, Animal*>::iterator it;
    it = animais.find(id);
    if (it != animais.end()) {
        return true;
    }
    return false;
}

bool sistema::verificaIdFuncionario(int id) {
    QMap<int, Funcionario*>::iterator it;
    it = funcionarios.find(id);
    if (it != funcionarios.end()) {
        return true;
    }
    return false;
}

bool sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
QString especialidade, int nivel_de_seguranca) {
    Funcionario* novo = new Tratador(id, nome, cpf, idade, tipo_sanguineo, especialidade,
    nivel_de_seguranca);
    funcionarios.insert(id, novo);
    return true;
} /*cadastro tratador*/

bool sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
QString especialidade, QString crmv) {
    Funcionario* novo = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, especialidade, crmv);
    funcionarios.insert(id, novo);
    return true;
} /*cadastro veterinario*/

bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo)
{
    Animal* novo = new Mamifero (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
        m_nome_batismo, m_cor_pelo);
    animais.insert (id,novo);

    return true;
} /*Cadastro de Mamifero*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo, QString autorizacao,
    QString uf_origem) {

        Animal* novo = new MamiferoNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
        veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, uf_origem);
        animais.insert (id,novo);
        return true;
    } /*Mamifero Nativo*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo, QString autorizacao,
    QString pais_origem, QString cidade_origem){

        Animal* novo = new MamiferoExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
        veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, pais_origem, cidade_origem);
        animais.insert (id,novo);
        return true;
    } /*Mamifero Exotico*/

bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno)
{
    Animal* novo = new Reptil (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
    m_nome_batismo, m_venenoso, tipo_veneno);
    animais.insert (id,novo);
    return true;
} /*Cadastro de Reptil*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno,
    QString autorizacao, QString uf_origem){
        Animal* novo = new ReptilNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
        tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, uf_origem);
        animais.insert (id,novo);
        return true;
    } /*Reptil Nativo*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno,
    QString autorizacao, QString pais_origem, QString cidade_origem) {
        Animal* novo = new ReptilExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
        tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, pais_origem, cidade_origem);
        animais.insert (id,novo);
        return true;
    } /*Reptil Exotico*/

bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas)
{
    Animal* novo = new Ave(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
    tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas);
    animais.insert (id,novo);
    return true;
} /*Cadastro de Ave*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
    double envergadura_das_asas, QString autorizacao,QString uf_origem){
        Animal* novo = new AveNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
        tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, uf_origem);
        animais.insert (id,novo);
        return true;
    } /*Ave Nativa*/

    bool sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
    double envergadura_das_asas, QString autorizacao, QString pais_origem, QString cidade_origem){
        Animal* novo = new AveExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
        tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, pais_origem,
        cidade_origem);

        animais.insert (id,novo);
        return true;
    } /*Ave Exotica*/

bool sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas){

    Animal* novo = new Anfibio (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
    id_tratador, nome_batismo, total_de_mudas);
    animais.insert (id,novo);
    return true;
} /*Anfibio*/

    bool sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
    QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
    QString autorizacao, QString uf_origem){
        Animal* novo = new AnfibioNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
        id_tratador, nome_batismo, total_de_mudas, autorizacao, uf_origem);
        animais.insert (id,novo);
        return true;
    } /*Anfibio Nativo*/

    bool sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
    QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
    QString autorizacao, QString pais_origem, QString cidade_origem) {
        Animal* novo = new AnfibioExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
        id_tratador, nome_batismo, total_de_mudas, autorizacao, pais_origem, cidade_origem);
        animais.insert (id,novo);
        return true;
    } /*Anfibio Exotico*/


QMap<int, Animal*> sistema::listagem(){
    return animais;
}
