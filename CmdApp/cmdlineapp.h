#ifndef CMDLINEAPP_H
#define CMDLINEAPP_H

#include <QObject>

class TCPServer;

class CmdLineApp : public QObject
{
    Q_OBJECT
public:
    explicit CmdLineApp(QObject *parent = 0);

public slots:
    void mLogMesg(QString pMsg);

private:
    TCPServer * _Server;
};

#endif // CMDLINEAPP_H
