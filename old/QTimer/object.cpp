#include "object.h"
#include <QTimer>
#include <QDebug>


Object::Object(QObject *parent)
    : QObject(parent) {
    _timer = new QTimer(this);
    connect(_timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
}

void Object::inicia()
{
    _timer->start(50);
}

void Object::onTimeOut() {
    qDebug() << "O tempo acabou!";
}
