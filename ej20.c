#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char stringInLowercase[200]= {0};
    for (size_t i = 0; i < strlen(argv[1]); i++)
    {
        int intChar= (int)argv[1][i];
        stringInLowercase[i]= (char)(intChar+32);
    }
    printf(stringInLowercase);
    return 0;
}
