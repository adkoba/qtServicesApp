#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = 0);
    ~Client();
};

#endif // CLIENT_H
