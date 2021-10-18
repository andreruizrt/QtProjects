#ifndef OBJECT_H
#define OBJECT_H

#include <QObject>

class QTimer;

class Object : public QObject
{
    Q_OBJECT
public:
    explicit Object(QObject *parent = 0);
    void inicia();
public slots:
    void onTimeOut();
private:
    QTimer *_timer;
};

#endif // OBJECT_H
