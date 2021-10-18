#include <QCoreApplication>
#include <QPointer>
#include <QObject>
#include <QDebug>

class Pessoa {
public:
    Pessoa(const QString nome, QObject *pai = 0)
        : QObject(pai) {
        _nome = nome;
    }

    QString nome() const {
        return _nome;
    }
private:
    QString _nome;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QPointer<Pessoa> ptr = new Pessoa("Juan");
//    Pessoa *pt = new Pessoa("Pedro");

    qDebug() << ptr->nome();
//    qDebug() << pt->nome();

    delete ptr;
//    delete pt;

    qDebug() << (ptr == NULL);
//    qDebug() << (pt == NULL);

    return a.exec();
}
