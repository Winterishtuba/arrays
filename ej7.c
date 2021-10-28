#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
    srand(time(NULL));
    int randomNumbers[100];
    int counter[10]= {0};

    for (size_t i = 0; i< 100; i++) {
        randomNumbers[i]= rand()%10;
        counter[randomNumbers[i]]++;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%zu: %d%%\n", i, counter[i]);
    }
    return 0;
}
