#ifndef DEAMON_H
#define DEAMON_H

#include <QCoreApplication>
#include "qtdeamon.h"

class Deamon : public QtDeamon<QCoreApplication>
{
public:
    Deamon(int argc, char **argv);
    ~Deamon();
    void start();
    void pause();
    void resume();
    void stop();
};

#endif // DEAMON_H
