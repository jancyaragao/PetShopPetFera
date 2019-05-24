#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include "dados_usuario.h"
#include "telamenuprincipal.h"
#include <QMessageBox>

namespace Ui {
class telaLogin;
}

class telaLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit telaLogin(QWidget *parent = nullptr);
    ~telaLogin();
    void verificador_de_login_e_senha();
    void registrar_usuario();

private slots:
    void on_btn_Criar_Usuario_clicked();

    void on_btn_entrar_clicked();

    void on_btn_testador_clicked();

private:
    Ui::telaLogin *ui;
    QVector <dados_usuario*> dados;
    TelaMenuPrincipal *TelaPrincipalPointer;
};

#endif // TELALOGIN_H
