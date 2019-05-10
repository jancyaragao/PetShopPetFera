#include "dados_usuario.h"

dados_usuario::dados_usuario(QString nome_, QString usuario_, QString cargo_, QString senha_):
                                    nome(nome_),usuario(usuario_),cargo(cargo_),senha(senha_){

}
dados_usuario::~dados_usuario(){
}

QString dados_usuario::get_usuario(){
    return usuario;
}
QString dados_usuario::get_cargo_usuario(){
    return cargo;
}
QString dados_usuario::get_nome_oficial_usuario(){
    return nome;
}
QString dados_usuario::get_senha(){
    return senha;
}
