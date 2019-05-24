#include "cadastramento_usuario.h"
#include "ui_cadastramento_usuario.h"

cadastramento_usuario::cadastramento_usuario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastramento_usuario)
{
    ui->setupUi(this);
}

cadastramento_usuario::~cadastramento_usuario()
{
    delete ui;

}
