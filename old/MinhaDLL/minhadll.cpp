#include "minhadll.h"
#include <QDebug>

MinhaDLL::MinhaDLL()
{
}

void MinhaDLL::saudacao() const {
    qDebug() << "Oi isso e uma DLL";
}
