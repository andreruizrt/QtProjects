#include <QCoreApplication>
#include "object.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Object obj;
    obj.inicia();

    return a.exec();
}
