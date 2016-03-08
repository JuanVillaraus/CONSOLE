#ifndef FRMPORTABLE_H
#define FRMPORTABLE_H

#include <QWidget>
#include <QDir>
#include <QDebug>

#define DAY_STYLE 0
#define DUSK_STYLE 1
#define NIGHT_STYLE 2

namespace Ui {
    class FrmPortable;
}

class FrmPortable : public QWidget
{
    Q_OBJECT

public:
    explicit FrmPortable(QWidget *parent = 0);
    ~FrmPortable();

QApplication *m_pApplication;
void changeStyleSheet(int iStyle);


private:
    Ui::FrmPortable *ui;

private slots:
    void on_btnBTR_clicked();
    void on_btnLOFAR_clicked();
};

#endif // FRMPORTABLE_H
