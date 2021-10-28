#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int count= atoi(argv[1]);
  int numeros[count];
  for (size_t i = 0; i < count; i++) {
    numeros[i]= i+1;
    printf("%d\n", numeros[i]);
  }
  return 0;
}
