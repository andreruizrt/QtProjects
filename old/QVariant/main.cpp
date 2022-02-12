#include <QCoreApplication>
#include <QVariant>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant v;

    v.setValue(5);

    qDebug() << v;

    return a.exec();
}
