#include "entropy.h"
#include<stdio.h>
#include<string.h>

int main(unsigned int argc, char ** argv)
{
    printf("%lf\n", argc > 1 ?entropy((unsigned char *)argv[1], strlen(argv[1])):0.);
    return 0;
}
