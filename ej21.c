#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int array[][3]= {{55,6,1}, {5,3,4}, {6,8,1}};
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}