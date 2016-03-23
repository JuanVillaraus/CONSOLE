#ifndef SERIALPORTREADER_H
#define SERIALPORTREADER_H

#include <QObject>
#include <QTextStream>
#include <Qtimer>
#include <QByteArray>
#include <QtSerialPort/QSerialPort>

class serialportreader : public QObject
{
    Q_OBJECT
public:

    serialportreader(QSerialPort *serialPort, QObject *parent = 0);
    ~serialportreader();

private slots:
    void handleReadyRead();
    void handleTimeout();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort *m_serialPort;
    QByteArray m_readData;
    QTextStream m_standarOutput;
    QTimer m_timer;

signals:

public slots:

};

#endif // SERIALPORTREADER_H
