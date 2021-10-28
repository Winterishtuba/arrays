#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i= 2;
    int length= atoi(argv[1]);
    long long unsigned int fibonacci[length];
    fibonacci[0]= 0;
    fibonacci[1]= 1;
    while (i < length) {
        fibonacci[i]= fibonacci[i-1]+fibonacci[i-2];
        i++;
    }
    for (size_t j = 0; j < length; j++)
    {
        printf("%zu\n", fibonacci[j]);
    }
    
    return 0;
}
