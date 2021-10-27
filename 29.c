#include <stdio.h>
#include <stdlib.h>

int main(void){
  int matriz[4][4];
  int n = 1;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      matriz[i][j] = n;
      n++;
    }
  }

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        printf("%d ", matriz[i][j]);
      }
      printf("\n\n\n");
    }


  for (int i = 0; i < 4; i++) {
    float sumaf = 0;
    float sumac = 0;
    for (int j = 0; j < 4; j++) {
      sumaf += matriz[i][j];
      sumac += matriz[j][i];
    }
    printf("%.2f\t%.2fs\n", sumaf/4, sumac/4);
  }


  return 0;
}
