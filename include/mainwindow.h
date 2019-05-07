#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "posautenticartelaprincipal.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Autenticador_clicked();

    void on_BotaoDeTeste_clicked();

private:
    Ui::MainWindow *ui;
    //adicionei esse ponteiro para que a janela posautenticação seja aberta de qualquer parte do programa.
    PosAutenticarTelaPrincipal *posautentic;
};

#endif // MAINWINDOW_H
