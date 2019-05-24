#ifndef TELAANIMAIS_H
#define TELAANIMAIS_H

#include <QMainWindow>

namespace Ui {
class telaanimais;
}

class telaanimais : public QMainWindow
{
    Q_OBJECT

public:
    explicit telaanimais(QWidget *parent = nullptr);
    ~telaanimais();

private:
    Ui::telaanimais *ui;
};

#endif // TELAANIMAIS_H
