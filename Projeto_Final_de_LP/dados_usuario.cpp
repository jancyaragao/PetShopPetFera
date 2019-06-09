#include "dados_usuario.h"

dados_usuario::dados_usuario(QString nome_, QString usuario_, QString funcao_, QString senha_, QString foto3x4_,QString cpf_,QString especialidade_,short int idade_):
                                    nome(nome_),usuario(usuario_),funcao(funcao_),senha(senha_),foto3x4(foto3x4_),cpf(cpf_),especialidade(especialidade_),idade(idade_){

}
dados_usuario::~dados_usuario(){
}
QString dados_usuario::get_usuario(){
    return usuario;
}
QString dados_usuario::get_funcao_usuario(){
    return funcao;
}
QString dados_usuario::get_nome_oficial_usuario(){
    return nome;
}
QString dados_usuario::get_senha(){
    return senha;
}
QString dados_usuario::get_foto3x4(){
    return foto3x4;
}
QString dados_usuario::get_Cpf(){
    return cpf;
}
QString dados_usuario::get_Especialidade(){
    return especialidade;
}
short int dados_usuario::get_Idade(){
    return idade;
}
