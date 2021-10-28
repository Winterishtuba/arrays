#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *number[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char card[100]= "\0";
    for (size_t i = 0; i < 3; i++)
    {
        strcat(card, number[rand()%10]);
        strcat(card, " de ");
        strcat(card, type[rand()%4]);
        strcat(card, "\n");
    }
    printf("%s", card);
    return 0;
}
