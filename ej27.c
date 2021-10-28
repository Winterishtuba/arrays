#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n= atoi(argv[1]);
    int chance= atoi(argv[2]);
    int matrix[n+2][n+2];
    for (size_t i = 0; i < n+2; i++)
    {
        for (size_t j = 0; j < n+2; j++)
        {
            if (chance <= ((rand()%100)+1))
            {
                matrix[i][j]= -1;
            } else {
                matrix[i][j]= 0;
            }
        }
        
    }

    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < n+2; j++)
        {
            if (matrix[i][j]==0) {
                for (size_t y = 0; y < 3; y++)
                {
                    for (size_t x = 0; x < 3; x++)
                    {
                        if (matrix[(i-1)+y][(j-1)+x] == -1) {
                            matrix[i][j]++;
                        }
                    }
                    
                }
                
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
