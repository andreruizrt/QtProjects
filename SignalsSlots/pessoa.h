#ifndef PESSOA_H
#define PESSOA_H

#include <QObject>

class Pessoa : public QObject
{
    Q_OBJECT
public:
    explicit Pessoa(QObject *parent = 0);

    void setNome(const QString &nome) {
        _nome = nome;
    }

    void falar(const QString &palavras);
signals:
    void falo(QString);
public slots:
    void escuta(const QString &palavras);
private:
    QString _nome;
};

#endif // PESSOA_H
