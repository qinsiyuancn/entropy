#include<math.h>

#ifndef CHAR_SET
    #define CHAR_SET 256
#endif

double entropy(const unsigned char * str, unsigned int len)
{
    unsigned int i = 0;
    unsigned int counts[CHAR_SET] = {0};
    double sum = 0.;
    while(i < len)counts[str[i++]]++;
    for(i = 0; i < (sizeof(counts)/sizeof(counts[0])); i++)
       if(counts[i])
           sum += log(counts[i] / (double)len) / log(2.) * counts[i] / len;
    return fabs(sum);
}

