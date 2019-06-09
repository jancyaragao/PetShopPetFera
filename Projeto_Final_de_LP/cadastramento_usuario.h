#ifndef CADASTRAMENTO_USUARIO_H
#define CADASTRAMENTO_USUARIO_H
#include <QComboBox>
#include <QMainWindow>


namespace Ui {
class cadastramento_usuario;
}

class cadastramento_usuario : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastramento_usuario(QWidget *parent = nullptr);
    ~cadastramento_usuario();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::cadastramento_usuario *ui;
};

#endif // CADASTRAMENTO_USUARIO_H
