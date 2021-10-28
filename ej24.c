#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int matrixA[][3]= {{55,6,1}, {5,3,4}, {6,8,1}};
    int matrixB[][3]= {{55,6,1}, {5,3,4}, {6,8,1}};
    int matrixC[3][3];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matrixC[i][j]= matrixA[i][j]+matrixB[i][j];
        }
        
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
