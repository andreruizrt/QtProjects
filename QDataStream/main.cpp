#include <QCoreApplication>
#include <QDataStream>
#include <QDebug>
#include <QFile>

class Pessoa {
public:
    Pessoa() {}

    Pessoa(const QString &nome, int idade, double salario)
        : _nome(nome), _idade(idade), _salario(salario) {}

    friend inline QDataStream &operator << (QDataStream &ds, const Pessoa &p);
    friend inline QDataStream &operator >> (QDataStream &ds, Pessoa &p);
    friend inline QDebug operator << (QDebug qd, const Pessoa &p);
private:
    QString _nome;
    int _idade;
    double _salario;
};

inline QDataStream &operator << (QDataStream &ds, const Pessoa &p) {
    return ds << p._nome << p._idade << p._salario;
}

inline QDataStream &operator >> (QDataStream &ds, Pessoa &p) {
    return ds >> p._nome >> p._idade >> p._salario;
}

inline QDebug operator << (QDebug qd, const Pessoa &p) {
    return ds << p._nome << p._idade << p._salario;
}

int main(int argc, char *argv[])
{
    QCoreApplication ap(argc, argv);
    QDataStream io;
    QFile arch;
    Pessoa pessoa("Andre", 22, 8000.0);

    arch.setFileName("/home/andreruxx/Desktop/QTProjects/arquivo.txt");
    arch.open(QIODevice::WriteOnly);

    io.setDevice(&arch);
    io.setVersion(QDataStream::Qt_5_3);
    io >> pessoa;

    arch.flush();
    arch.close();
    qDebug() << pessoa;

    return ap.exec();

}
