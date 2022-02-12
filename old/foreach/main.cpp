#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> L { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    foreach (int i, L) {
        qDebug() << i;
    }

    return a.exec();
}
