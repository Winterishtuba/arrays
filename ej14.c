#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *number[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char deck[40][100];
    int deckIndex= 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++) {
          sprintf(deck[deckIndex], "%s de %s\n", number[j], type[i]);
          deckIndex++;
        }
    }
    for (int i = 0; i < 40; i++)
    {
        printf(deck[i]);
    }
    return 0;
}
