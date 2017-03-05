#ifndef CMDLINEAPP_H
#define CMDLINEAPP_H

#include <QObject>

class CmdLineApp : public QObject
{
    Q_OBJECT
public:
    explicit CmdLineApp(QObject *parent = 0);

signals:

public slots:
};

#endif // CMDLINEAPP_H