#ifndef DADOS_USUARIO_H
#define DADOS_USUARIO_H
#include<QString>


class dados_usuario
{
    private:
        int id;
        QString nome;
        QString usuario;
        QString funcao;
        QString senha;
        QString foto3x4;
        QString cpf;
        QString especialidade;
        short int idade;
        int nivel_de_seguranca;

    public:
        dados_usuario(int id_, QString nome_,QString usuario_, QString funcao_, QString senha_, QString foto3x4_, QString cpf_,QString especialidade_, short int idade_);
        ~dados_usuario();
        int get_Id();
        QString get_nome_oficial_usuario();
        QString get_usuario();
        QString get_funcao_usuario();
        QString get_senha();
        QString get_foto3x4();
        QString get_Cpf();
        QString get_Especialidade();
        short int get_Idade();
};

#endif // DADOS_USUARIO_H
