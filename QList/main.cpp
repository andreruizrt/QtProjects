#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> L;
    int soma = 0;

    L << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8;

    for(int i = 0; i < L.size(); ++i) {
        soma += L[i];
    }

    qDebug() << L << " = " << soma;

    return a.exec();
}
