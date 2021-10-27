#include <stdio.h>
#include <stdlib.h>
#define n 3

int main(int argc, char const *argv[]) {

  int m1[n][n] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int m2[n][n] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  int res[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      res[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        res[i][j] += m1[i][k] * m2[k][j];
      }
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }


  return 0;
}
