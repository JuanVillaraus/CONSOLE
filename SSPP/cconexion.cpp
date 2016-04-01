#include "CConexion.h"

#define localhost QHostAddress("172.16.1.0")
#define localport 5002

CConexion::CConexion(QObject *parent) :
    QObject(parent)
{

    udpsocket = new QUdpSocket(this);
    udpsocket->bind(localdir,puertolocal);



    udpConection = new QUdpSocket(this);
    udpConection->bind(localhost,localport);
    connect(udpConection, SIGNAL(readyRead()),this,SLOT(read_Received()));
    hostSSPP = "192.168.1.177"; //this value use in the SSPP
    hostLOCAL = "127.0.0.1";
    portSSPP = 8888;

}

void CConexion::read_Received()
{
    while(udpConection->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(udpConection->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;
        udpConection->readDatagram(datagram.data(),datagram.size(), &sender, &senderPort);
        QString info = datagram.data();

        if(info == "runPPI")
            portPPI = senderPort;
        if(info == "runBTR")
            portBTR = senderPort;
        if(info == "runLF")
            portLF = senderPort;
        if(puertoSPP == senderPort){
             udpConection->writeDatagram(info.toLatin1(),hostLOCAL,portBTR);
             udpConection->writeDatagram(info.toLatin1(),hostLOCAL,portLF);
        }
        if(info == "BTR" || info == "LOFAR")
            udpConection->writeDatagram(info.toLatin1(),hostSSPP,portSSPP);
        if(portBTR == senderPort){
            udpConection->writeDatagram(info.toLatin1(),hostSSPP,portSSPP);

        }
    }
}
