#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n= atoi(argv[1]);
    int chance= atoi(argv[2]);
    int matrix[n][n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (chance <= ((rand()%100)+1))
            {
                matrix[i][j]= 1;
            } else {
                matrix[i][j]= 0;
            }
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
