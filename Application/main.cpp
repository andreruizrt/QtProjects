#include <QCoreApplication>
#include <minhadll.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MinhaDLL mDLL;
    mDLL.saudacao();
    return a.exec();
}
