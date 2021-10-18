#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream io;
    QFile arch;
    QString conteudo;

    arch.setFileName(":/main.cpp");
    arch.open(QIODevice::Text | QIODevice::ReadOnly);
    io.setDevice(&arch);
    conteudo = io.readAll();
    arch.close();
    qDebug() << conteudo;

    return a.exec();
}
