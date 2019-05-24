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
        QString foto3x4;
    public:
        dados_usuario(QString nome_,QString usuario_, QString cargo_, QString senha_, QString foto3x4_);
        ~dados_usuario();
        QString get_nome_oficial_usuario();
        QString get_usuario();
        QString get_cargo_usuario();
        QString get_senha();
        QString get_foto3x4();
};

#endif // DADOS_USUARIO_H
