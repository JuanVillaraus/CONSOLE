#include "serialportreader.h"
#include <QCoreApplication>

serialportreader::serialportreader(QSerialPort *serialPort, QObject *parent) :
    QObject(parent), m_serialPort(serialPort), m_standarOutput(stdout)
{

    connect(m_serialPort, &QSerialPort::readyRead, this, &serialportreader::handleReadyRead);
        connect(m_serialPort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),
                this, &serialportreader::handleError);
        connect(&m_timer, &QTimer::timeout, this, &serialportreader::handleTimeout);

        m_timer.start(5000);


}

serialportreader::~serialportreader()
{
}

void serialportreader::handleReadyRead()
{
    m_readData.append(m_serialPort->readAll());
    if (!m_timer.isActive())
        m_timer.start(5000);
}

void serialportreader::handleTimeout()
{
    if (m_readData.isEmpty()) {
            m_standardOutput << QObject::tr("No data was currently available for reading from port %1").arg(m_serialPort->portName()) << endl;
        } else {
            m_standardOutput << QObject::tr("Data successfully received from port %1").arg(m_serialPort->portName()) << endl;
            m_standardOutput << m_readData << endl;
    }

    QCoreApplication::quit();
}

void serialportreader::handleError(QSerialPort::SerialPortError serialPortError)
{
    if (serialPortError == QSerialPort::ReadError) {
            m_standardOutput << QObject::tr("An I/O error occurred while reading the data from port %1, error: %2").arg(m_serialPort->portName()).arg(m_serialPort->errorString()) << endl;
            QCoreApplication::exit(1);
        }
}
