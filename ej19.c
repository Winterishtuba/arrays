#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char morseAlphabet[26][100]= {"\0"};
void morseConstructor(void) {
    char d[]= "---";
    char p[]= ".";
    sprintf(morseAlphabet[0], "%s %s   ", p,d);
    sprintf(morseAlphabet[1], "%s %s %s %s   ", d,p,p,p);
    sprintf(morseAlphabet[2], "%s %s %s %s   ", d,p,d,p);
    sprintf(morseAlphabet[3], "%s %s %s   ", d,p,p);
    sprintf(morseAlphabet[4], "%s   ", p);
    sprintf(morseAlphabet[5], "%s %s %s %s   ", p,p,d,p);
    sprintf(morseAlphabet[6], "%s %s %s   ", d,d,p);
    sprintf(morseAlphabet[7], "%s %s %s %s   ", p,p,p,p);
    sprintf(morseAlphabet[8], "%s %s   ", p,p);
    sprintf(morseAlphabet[9], "%s %s %s %s   ", p,d,d,d);
    sprintf(morseAlphabet[10], "%s %s %s   ", d,p,d);
    sprintf(morseAlphabet[11], "%s %s %s %s   ", p,d,p,p);
    sprintf(morseAlphabet[12], "%s %s   ", d,d);
    sprintf(morseAlphabet[13], "%s %s   ", d,p);
    sprintf(morseAlphabet[14], "%s %s %s   ", d,d,d);
    sprintf(morseAlphabet[15], "%s %s %s %s   ", p,d,d,p);
    sprintf(morseAlphabet[16], "%s %s %s %s   ", d,d,p,d);
    sprintf(morseAlphabet[17], "%s %s %s   ", p,d,p);
    sprintf(morseAlphabet[18], "%s %s %s   ", p,p,p);
    sprintf(morseAlphabet[19], "%s   ", d);
    sprintf(morseAlphabet[20], "%s %s %s   ", p,p,d);
    sprintf(morseAlphabet[21], "%s %s %s %s   ", p,p,p,d);
    sprintf(morseAlphabet[22], "%s %s %s   ", p,d,d);
    sprintf(morseAlphabet[23], "%s %s %s %s   ", d,p,p,d);
    sprintf(morseAlphabet[24], "%s %s %s %s   ", d,p,d,d);
    sprintf(morseAlphabet[25], "%s %s %s %s   ", d,d,p,p);
    return;
}

int main(int argc, char const *argv[])
{
    morseConstructor();
    char morse[200]= {'\0'};
    int j= 1;
    while (j < argc)
    {
        for (size_t i = 0; i < strlen(argv[j]); i++)
        {
            int charToInt= (int)argv[j][i];
            bool isLetter= (charToInt > 96 && charToInt < 123);
            if (isLetter) {
                strcat(morse, morseAlphabet[charToInt-97]);
            } else {
                printf("Invalid inputs\n");
                return 0;
            }
        }
        strcat(morse, "| ");
        j++;
    }
    printf(
        morse);
    return 0;
    
}
