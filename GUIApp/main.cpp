#include "dialog.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog wGui;
    wGui.show();

    return a.exec();
}
