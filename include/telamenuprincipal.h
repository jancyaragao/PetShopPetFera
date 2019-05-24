#ifndef TELAMENUPRINCIPAL_H
#define TELAMENUPRINCIPAL_H

#include <QMainWindow>
#include <QPixmap>
#include "cadastramento_usuario.h"

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

private:
    Ui::TelaMenuPrincipal *ui;
    cadastramento_usuario *TelaCadastroPointer;
};

#endif // TELAMENUPRINCIPAL_H
