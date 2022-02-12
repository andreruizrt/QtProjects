#include <QCoreApplication>
#include <QTextStream>
#include <QtDebug>
#include <QFile>
#include <QMap>
#include <ctime>

#define TOTAL 10000

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, int>::Iterator it; //iterador
    QMap<int, int> registro;

    QTextStream io;
    QFile arch;
    int n, valor, soma = 0;

    // Saída do arquivo de números
    qsrand(time(NULL));
    arch.setFileName("/home/andreruxx/Desktop/QTProjects/numeros.txt");
    arch.open(QIODevice::WriteOnly | QIODevice::Text);
    io.setDevice(&arch);
    for (int i = 0; i < TOTAL; ++i)
        io << qrand() % 10 + 1 << ' ';

    arch.flush();
    arch.close();

    arch.open(QIODevice::ReadOnly | QIODevice::Text);
    while (!io.atEnd()) {
        io >> n;
        ++registro[n];
   }
   for (it = registro.begin(); it != registro.end(); ++it) {
       valor = it.value();
       soma += valor;
       qDebug() << it.key() << ": " << valor;
   }

   qDebug() << "Soma: " << soma;
   qDebug() << "Total: " << TOTAL;

    return a.exec();
}
