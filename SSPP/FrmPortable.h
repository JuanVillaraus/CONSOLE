#ifndef FRMPORTABLE_H
#define FRMPORTABLE_H

#include <QWidget>

namespace Ui {
    class FrmPortable;
}

class FrmPortable : public QWidget
{
    Q_OBJECT

public:
    explicit FrmPortable(QWidget *parent = 0);
    ~FrmPortable();

private:
    Ui::FrmPortable *ui;
};

#endif // FRMPORTABLE_H
