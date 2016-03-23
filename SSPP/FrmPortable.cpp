#include "FrmPortable.h"
#include "ui_FrmPortable.h"
#include "qdir.h"
#include "serialportreader.h"

#include <QtSerialPort/QSerialPort>

#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QStringList>

FrmPortable::FrmPortable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmPortable)
{
    ui->setupUi(this);

    QTextStream standardOutput(stdout);
    QSerialPort serialPort;
    QString serialPortName = "COM4"; //ttys2 baudage 4800 in linux use COM4 in windows

    serialPort.setPortName(serialPortName);
    serialPort.setBaudRate(8600);

    if (!serialPort.open(QIODevice::ReadOnly))
    {
        standardOutput << QObject::tr("Failed to open port %1, error: %2").arg(serialPortName).arg(serialPort.errorString()) << endl;
                return 1;
    }
    SerialPortReader serialportreader(&serialPort);

}

FrmPortable::~FrmPortable()
{
    delete ui;
}

void FrmPortable::on_btnLOFAR_clicked()
{
    ui->btnLOFAR->setEnabled(false);
    ui->btnBTR->setEnabled(true);


}

void FrmPortable::on_btnBTR_clicked()
{
    ui->btnBTR->setEnabled(false);
    ui->btnLOFAR->setEnabled(true);
}

void FrmPortable::changeStyleSheet(int iStyle)
{
    QDir dir;

    if(m_pApplication != NULL)
        {

        //Change directory of the file
        QString strFilePath(dir.absolutePath()+"/");

            if(iStyle == DAY_STYLE)
                strFilePath.append("siviso_day.css");

            if(iStyle == DUSK_STYLE)
                strFilePath.append("siviso_dusk.css");

            if(iStyle == NIGHT_STYLE)
                strFilePath.append("siviso_night.css");

            QFile file(strFilePath);

            if(!file.open( QIODevice::ReadOnly | QIODevice::Text ))
            {
                qDebug() << "SIVISO: Failed to open- Copy the CSS File under the folder build...";
            }
            else
            {
                m_pApplication->setStyleSheet(QString(file.readAll()));
                file.close();
            }
    }
}
