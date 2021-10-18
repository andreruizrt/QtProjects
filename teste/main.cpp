#include <QCoreApplication>
#include <QVariant>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant v;

    v.setValue<int>(5);
    double x = v.value<double>();
    qDebug() << x;

    return a.exec();
}
