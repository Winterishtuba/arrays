#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  char *text[]= {"ur mom", "69420", "69", "420"};
  bool match= false;
  for (size_t i = 0; i < 4; i++) {
    if (strcmp(argv[1], text[i])==0) {
      match= true;
      printf("%d\n", i);
    }
  }
  if (!match) {
    printf("-1\n");
  }
  return 0;
}
