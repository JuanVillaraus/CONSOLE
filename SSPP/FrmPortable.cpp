#include "FrmPortable.h"
#include "ui_FrmPortable.h"
#include "qdir.h"



#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QStringList>

FrmPortable::FrmPortable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmPortable)
{
    ui->setupUi(this);


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
