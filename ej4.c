#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int a[100];
  int sum= 0;
  for (int i=0; i < 100; i++) {
    a[i]= rand()%101;
    sum+= a[i];
  }
  printf("%d\n", sum/100);
  return 0;
}
