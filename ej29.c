#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int matrix[4][4]= {
    {5,6,8,6},
    {83,4,8,7},
    {7,3,1,9},
    {5,8,4,3}
    };
    for (size_t i = 0; i < 4; i++)
    {
        double sum= 0;
        for (size_t j = 0; j < 4; j++)
        {
            sum+= matrix[i][j];
        }
        printf("%f ", sum/4);
    }
    printf("\n");
    for (size_t i = 0; i < 4; i++)
    {
        double sum= 0;
        for (size_t j = 0; j < 4; j++)
        {
            sum+= matrix[j][i];
        }
        printf("%f ", sum/4);
    }
    
    return 0;
}
