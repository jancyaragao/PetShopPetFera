#ifndef TELAMENUPRINCIPAL_H
#define TELAMENUPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class TelaMenuPrincipal;
}

class TelaMenuPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaMenuPrincipal(QWidget *parent = nullptr);
    ~TelaMenuPrincipal();

private:
    Ui::TelaMenuPrincipal *ui;
};

#endif // TELAMENUPRINCIPAL_H
