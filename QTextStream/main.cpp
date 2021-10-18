#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QString conteudo;
    QTextStream io; // input & output ( entrada e saída )
    QFile a;

    a.setFileName("/home/andreruxx/Desktop/QTProjects/arquivo.txt");
    a.open(QIODevice::ReadWrite | QIODevice::Text);
    if(!a.isOpen()) {
        qDebug() << "Error: arquivo nao aberto";
        return 1;
    }
    io.setDevice(&a);
    conteudo = io.readAll();
    qDebug() << conteudo;

    a.flush();
    a.close();

    return app.exec();
}
