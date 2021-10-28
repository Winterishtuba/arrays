#include <stdio.h>

int main(void) {
  int numeros[10];
  for (size_t i = 0; i < 10; i++) {
    numeros[i]= i+1;
    printf("%d\n", numeros[i]);
  }
  return 0;
}
