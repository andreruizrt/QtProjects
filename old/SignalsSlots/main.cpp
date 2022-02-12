#include <QCoreApplication>
#include "pessoa.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject *p = new QObject;
    Pessoa *juan = new Pessoa(p);
    Pessoa *pedro = new Pessoa(p);
    juan->setNome("Juan");
    pedro->setNome("Pedro");

    QObject::connect(juan, SIGNAL(falo(QString)), pedro,
                     SLOT(escuta(QString)));
    QObject::connect(pedro, SIGNAL(falo(QString)), juan,
                     SLOT(escuta(QString)));

    juan->falar("Olá Pedro");
    pedro->falar("Olá, como esta?");
    juan->falar("Bem, obrigado, e voce?");
    pedro->falar("Estou bem tambem");

    delete p;
    return a.exec();
}
