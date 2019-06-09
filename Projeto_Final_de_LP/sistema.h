#ifndef sistema_H
#define sistema_H

#include <QMainWindow>
#include <QString>
#include <QMap>
#include "dados_usuario.h"
#include "telamenuprincipal.h"
#include <QMessageBox>
#include <algorithm>

namespace Ui {
class sistema;
}

class sistema : public QMainWindow
{
    Q_OBJECT

public:
    explicit sistema(QWidget *parent = nullptr);
    ~sistema();
    void verificador_de_login_e_senha();
    void registrar_usuario(QString nome_, QString funcao_, QString senha_, QString foto3x4_, QString cpf_, QString especialidade_,short int idade_, int nivel_de_seguranca_);
    static int id_counter;

private slots:
    void on_btn_entrar_clicked();

    void on_btn_testador_clicked();

private:
    Ui::sistema *ui;
    QMap <int,dados_usuario*> dados;
    TelaMenuPrincipal *TelaPrincipalPointer;
};

#endif // sistema_H
