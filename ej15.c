#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *number[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char deck[40][100]= {{'\0'}};
    char *randDeck[40];
    int deckIndex= 0;
    int randIndexes[40]= {0};
    int n= atoi(argv[1]);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++) {
          char card[100] = "";
          strcat(card, number[j]);
          strcat(card, " de ");
          strcat(card, type[i]);
          strcat(deck[deckIndex], card);
          deckIndex++;
        }
    }
    int i= 1;
    while (i < 40) {
      int randNum= rand()%40;
      bool isUnique= true;
      if (randIndexes[i-1] == randNum) {
        isUnique= false;
      }
      if (isUnique) {
        randIndexes[i]= rand()%40;
        i++;
      }
    }
    for (size_t i = 0; i < 40; i++) {
      randDeck[i]= deck[randIndexes[i]];
    }
    for (size_t i = 0; i < n*3; i++) {
      printf("%s\n", randDeck[i]);
    }
    return 0;
  }
