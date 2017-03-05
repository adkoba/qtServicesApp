#include "cmdlineapp.h"
#include <QDebug>

#include "TCPServer.h"

CmdLineApp::CmdLineApp(QObject *parent)
    : QObject(parent)
{
    _Server = new TCPServer;
    connect(_Server, &TCPServer::sMsgLog, this, &CmdLineApp::mLogMesg);
    _Server->start();
}

void CmdLineApp::mLogMesg(QString pMsg)
{
    qInfo() << pMsg;
}

