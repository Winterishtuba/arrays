#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int matrix[][2]= {
        {2,6},
        {4,78}
    };
    int trace= 0;
    for (size_t i = 0; i < 2; i++)
    {
        trace+= matrix[i][i];
    }
    printf("%d", trace);
    return 0;
}
