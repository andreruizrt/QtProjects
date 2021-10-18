#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 0; i < 10000; ++i) {
        printf("%i\n", i);
    }

    return 0;
}
