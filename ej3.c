#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n= atoi(argv[1]);
  int m= atoi(argv[2]);
  int a[n];
  for (int i=0; i<n; i++) {
    a[i]= rand()%(m+1);
    printf("%d\n", a[i]);
  }
  return 0;
}
