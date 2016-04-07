#include "FrmPortable.h"
#include "ui_FrmPortable.h"
#include "qdir.h"



#include <QTextStream>
#include <QCoreApplication>
#include <QFile>
#include <QStringList>

#define localdir QHostAddress("192.168.1.178")        //de donde nos comunicamos
#define puertolocal 5002

FrmPortable::FrmPortable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmPortable)
{
    ui->setupUi(this);


    udpsocket = new QUdpSocket(this);
    udpsocket->bind(localdir,puertolocal);
    connect(udpsocket,SIGNAL(readyRead()),this,SLOT(leerSocket()));

    direccionSPP= "192.168.1.177";                    //direccion del SPP
    puertoSPP = 8888;                                 //puerto del SPP
    direccionApp = "192.168.1.178";                   //direccion que usaran las aplicaciones
    //udpsocket->writeDatagram(ui->view->text().toLatin1(),direccionPar,puertoPar); //visualiza la direcion IP y puerto del que envia


}

FrmPortable::~FrmPortable()
{
    delete ui;
}

void FrmPortable::leerSocket()
{
    while(udpsocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpsocket->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        udpsocket->readDatagram(datagram.data(),datagram.size(), &sender, &senderPort);
        //ui->textTestGrap->appendPlainText(QString(datagram) + " (ip->" + sender.toString() + " ; port-> " + QString("%1").arg(senderPort) + " ) ");
        QString info = datagram.data();
        //QString s = " ";
        /*if(info.data()[0]=='$')                       //verifica cabecera y parte elo paquete en secciones sepáradas ṕor punto y coma
        for(int x=0;x<=info.size();x++)
           {
            if(info.data()[x]!=';')
                s += info.data()[x];
            else{
                ui->textTestGrap->appendPlainText(s);
                s = " ";
            }
        }
        else
            ui->textTestGrap->appendPlainText("ERROR: el mensaje no tiene cabecera");*/
        //ui->textTestGrap->appendPlainText(" port-> " + QString("%1").arg(senderPort));
        //ui->textTestGrap->appendPlainText(info);
        //s = " ";

        if(info == "runPPI")
            puertoPPI = senderPort;
        if(info == "runBTR")
            puertoBTR = senderPort;
        if(info == "runLF")
            puertoLF = senderPort;
        //puertoPar = senderPort;
        if(puertoSPP == senderPort){
             udpsocket->writeDatagram(info.toLatin1(),direccionApp,puertoBTR);
             udpsocket->writeDatagram(info.toLatin1(),direccionApp,puertoLF);
        }
        if(info == "BTR" || info == "LOFAR")
            udpsocket->writeDatagram(info.toLatin1(),direccionSPP,puertoSPP);
        if(puertoBTR == senderPort){
            //ui->textTestGrap->appendPlainText(" intento enviar ");
            udpsocket->writeDatagram(info.toLatin1(),direccionSPP,puertoSPP);
            //ui->textTestGrap->appendPlainText(" paquete enviado ");
        }
    }
}

void FrmPortable::on_btnLOFAR_clicked()
{
    ui->btnLOFAR->setEnabled(false);
    ui->btnBTR->setEnabled(true);
    QString s = "LOFAR";
    //ui->view->appendPlainText("send: " + s);
    udpsocket->writeDatagram(s.toLatin1(),direccionSPP,puertoSPP);
    s = "LF_ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
    s = "BTR_OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);


}

void FrmPortable::on_btnBTR_clicked()
{
    ui->btnBTR->setEnabled(false);
    ui->btnLOFAR->setEnabled(true);
    QString s = "BTR";
    //ui->view->appendPlainText("send to SSPP: " + s);
    udpsocket->writeDatagram(s.toLatin1(),direccionSPP,puertoSPP);
    s = "BTR_ON";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoBTR);
    s = "LF_OFF";
    udpsocket->writeDatagram(s.toLatin1(),direccionApp,puertoLF);
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
