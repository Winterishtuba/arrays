#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix[3][3];
    int count =1;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matrix[i][j]= atoi(argv[count]);
            count++;
        }
        
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
