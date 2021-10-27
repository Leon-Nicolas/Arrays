#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  argv[1];
  char *array[5] = {"perro", "rata", "lujan", "cyberman", "gato"};
  for (int i = 0; i < 5; i++) {
    bool iguales = true;
    int j = 0;
    while (argv[1][j] != 0) {
      if (!(argv[1][j] == array[i][j])) {
        iguales = false;
        j++;
      }
    }
    if (iguales) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");

  return 0;
}
