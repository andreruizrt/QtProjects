#include <QCoreApplication>
#include <QDebug>

class Pessoa {
public:
    Pessoa(const QString &nome, int idade)
        : _nome(nome), _idade(idade) {}

    friend inline QDebug operator << (QDebug qd, const Pessoa &p);

private:
    QString _nome;
    int _idade;
};

inline QDebug operator << (QDebug qd, const Pessoa &p) {
    return qd << p._nome << " " << p._idade;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Pessoa juan("Juan", 29);
    qDebug() << juan;
    return a.exec();
}
