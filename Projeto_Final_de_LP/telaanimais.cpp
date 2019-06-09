#include "telaanimais.h"
#include "ui_telaanimais.h"

telaanimais::telaanimais(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telaanimais)
{
    ui->setupUi(this);
}

telaanimais::~telaanimais()
{
    delete ui;
}

void telaanimais::on_pushButton_clicked()
{

}
