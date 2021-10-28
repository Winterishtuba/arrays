#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int a[100];
    int max= -1;
    int min= 101;
    for (int i=0; i < 100; i++) {
        a[i]= rand()%101;
    }
    for (size_t i = 0; i < 100; i++) {
        if (a[i] > max) {
            max= a[i];
        }
        if (a[i] < min) {
            min= a[i];
        }
    }
    printf("Max: %d, Min: %d", max, min);
    
    return 0;
}
