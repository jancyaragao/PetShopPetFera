#include "telamenuprincipal.h"
#include "ui_telamenuprincipal.h"

TelaMenuPrincipal::TelaMenuPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaMenuPrincipal)
{
    ui->setupUi(this);
}

TelaMenuPrincipal::~TelaMenuPrincipal()
{
    delete ui;
}
