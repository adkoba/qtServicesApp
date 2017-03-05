#include <QCoreApplication>
#include "cmdlineapp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CmdLineApp appLine;

    return a.exec();
}
