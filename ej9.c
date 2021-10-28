#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int numbers[100]= {0};
    int numbersLength= sizeof numbers/sizeof numbers[0];
    for (size_t i = 1; i < 20; i++)
    {
        numbers[i]= numbers[i-1]+2;
    }
    for (size_t i = 20; i < numbersLength; i++)
    {
        numbers[i]= rand()%100;
    }
    int invertedNumbers[numbersLength];
    for (size_t i = 0; i < numbersLength; i++)
    {
        invertedNumbers[i]= numbers[(numbersLength-1)-i];
        printf("%d\n", invertedNumbers[i]);
    }
    return 0;
}
