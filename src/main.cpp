#include "telalogin.h"
#include "dados_usuario.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    telaLogin w;
    w.show();

    return a.exec();
}
