#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int numbers[]= {1,2,3,4,5,6};
    int invertedNumbers[(sizeof numbers)/sizeof numbers[0]];
    for (size_t i = 0; i < 6; i++)
    {
        invertedNumbers[i]= numbers[5-i];
        printf("%d\n", invertedNumbers[i]);
    }
    
    return 0;
}
