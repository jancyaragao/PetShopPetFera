#ifndef CRUDTELA_H
#define CRUDTELA_H

#include <QMainWindow>


namespace Ui {
class CrudTela;
}

class CrudTela : public QMainWindow
{
    Q_OBJECT

public:
    explicit CrudTela(QWidget *parent = nullptr);
    ~CrudTela();

private slots:
    void on_comboBox_Tipo_currentTextChanged(const QString &arg1);

private:
    Ui::CrudTela *ui;
};

#endif // CRUDTELA_H
