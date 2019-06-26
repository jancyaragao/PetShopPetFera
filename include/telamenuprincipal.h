#ifndef TELAMENUPRINCIPAL_H
#define TELAMENUPRINCIPAL_H

#include <QMainWindow>
#include <QPixmap>
#include "cadastramento_usuario.h"
#include "crudtela.h"
#include "cadastro_animal.h"

namespace Ui {
class TelaMenuPrincipal;
}

class TelaMenuPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaMenuPrincipal(QWidget *parent = nullptr);
    ~TelaMenuPrincipal();
    void RecebeNome(QString Nome_CP,QString Cargo_CP, QString foto_cp);

private slots:

    void on_btn_logoff_clicked();

    void on_btn_criar_usuario_clicked();

    void on_btn_logoff_2_clicked();

    void on_pushButton_clicked();

    void on_btn_criar_animal_clicked();

private:
    Ui::TelaMenuPrincipal *ui;
    cadastramento_usuario *TelaCadastroPointer;
    CrudTela *TelaCrudPointer;
    cadastro_animal *TelaCadastroAnimalPointer;

};

#endif // TELAMENUPRINCIPAL_H
