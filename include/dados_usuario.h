#ifndef DADOS_USUARIO_H
#define DADOS_USUARIO_H
#include<QString>


class dados_usuario
{
    private:
        QString nome;
        QString usuario;
        QString cargo;
        QString senha;
    public:
        dados_usuario(QString nome_,QString usuario_, QString cargo_, QString senha_);
        ~dados_usuario();
        QString get_nome_oficial_usuario();
        QString get_usuario();
        QString get_cargo_usuario();
        QString get_senha();
};

#endif // DADOS_USUARIO_H
