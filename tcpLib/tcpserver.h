#ifndef TCPSERVER_H
#define TCPSERVER_H

class QTcpServer;
class QNetworkSession;

#include <QObject>
#include <QStringList>

class TCPServer : public QObject
{
    Q_OBJECT

public:
    explicit TCPServer();

signals:
    void sMsgLog(const QString&);

private slots:
    void sessionOpened();
    void sendFortune();

private:
    QTcpServer *tcpServer;
    QStringList fortunes;
    QNetworkSession *networkSession;
};

#endif // TCPSERVER_H
