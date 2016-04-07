#ifndef FRMPORTABLE_H
#define FRMPORTABLE_H

#include <QWidget>
#include <QDir>
#include <QDebug>
#include <QHostAddress>
#include <QUdpSocket>

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

public slots:
    void leerSocket();

private:
    Ui::FrmPortable *ui;

    QUdpSocket *udpsocket;
    QHostAddress direccionSPP;
    QHostAddress direccionApp;
    quint16 puertoSPP;
    quint16 puertoPPI;
    quint16 puertoBTR;
    quint16 puertoLF;

private slots:
    void on_btnBTR_clicked();
    void on_btnLOFAR_clicked();
};

#endif // FRMPORTABLE_H
