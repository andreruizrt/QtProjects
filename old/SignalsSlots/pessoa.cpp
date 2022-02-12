#include "pessoa.h"
#include <QDebug>

Pessoa::Pessoa(QObject *parent) : QObject(parent){}

void Pessoa::escuta(const QString &palavras) {
    qDebug() << _nome << "escutou: " << palavras;
}

void Pessoa::falar(const QString &palavras) {
    emit falo(palavras);
}
