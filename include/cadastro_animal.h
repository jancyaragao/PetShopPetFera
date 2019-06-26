#ifndef CADASTRO_ANIMAL_H
#define CADASTRO_ANIMAL_H

#include <QMainWindow>
//#include "sistema.h"

namespace Ui {
class cadastro_animal;
}

class cadastro_animal : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastro_animal(QWidget *parent = nullptr);
    ~cadastro_animal();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

    void on_m_classe_txt_combo_box_currentTextChanged(const QString &arg1);

    void on_m_venenoso_txt_currentTextChanged(const QString &arg1);

    void on_m_tipo_txt_combo_box_currentTextChanged(const QString &arg1);


    void on_m_id_spin_editingFinished();

private:
    Ui::cadastro_animal *ui;
};

#endif // CADASTRO_ANIMAL_H
