#include "posautenticartelaprincipal.h"
#include "ui_posautenticartelaprincipal.h"

PosAutenticarTelaPrincipal::PosAutenticarTelaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PosAutenticarTelaPrincipal)
{
    ui->setupUi(this);
}

PosAutenticarTelaPrincipal::~PosAutenticarTelaPrincipal()
{
    delete ui;
}
