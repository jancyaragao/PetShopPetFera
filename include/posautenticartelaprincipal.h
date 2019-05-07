#ifndef POSAUTENTICARTELAPRINCIPAL_H
#define POSAUTENTICARTELAPRINCIPAL_H
#include <QMainWindow>
#include <QDialog>
//#include "mainwindow.h"

namespace Ui {
class PosAutenticarTelaPrincipal;
}

class PosAutenticarTelaPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit PosAutenticarTelaPrincipal(QWidget *parent = nullptr);
    ~PosAutenticarTelaPrincipal();

private:
    Ui::PosAutenticarTelaPrincipal *ui;
};

#endif // POSAUTENTICARTELAPRINCIPAL_H
