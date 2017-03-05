#ifndef TCPSERVER_H
#define TCPSERVER_H

class QTcpServer;
class QNetworkSession;

#include "tcplib_global.h"

#include <QObject>
#include <QStringList>

class TCPLIB_EXPORT TCPServer : public QObject
{
    Q_OBJECT

public:
    explicit TCPServer();
    void start();

signals:
    void sMsgLog(QString);

private slots:
    void sessionOpened();
    void sendFortune();

private:
    QTcpServer *tcpServer;
    QStringList fortunes;
    QNetworkSession *networkSession;
};

#endif // TCPSERVER_H
