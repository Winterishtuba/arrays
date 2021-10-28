#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n= atoi(argv[1]);
    int array[n][n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            array[i][j]= 0;
        }
        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        array[n][n]= 1;
    }
    return 0;
}
