#include "deamon.h"

int main(int argc, char *argv[])
{
    Deamon service(argc, argv);

    return service.exec();
}
