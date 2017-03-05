#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class QLabel;
class TCPServer;

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void mLogMesg(QString pMsg);

private:
    QLabel *statusLabel;
    TCPServer *_Server;
};

#endif // DIALOG_H
