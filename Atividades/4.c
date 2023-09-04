#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, j, numero[5][5];
  for (i = 0; i <= 4; i++) {
    for (j = 0; j <= 3; j++) {
      printf("Informe um numero: \n");
      scanf("%d", &numero[i][j]);
    }
  }
  for (i = 0; i <= 4; i++) {
    printf("\n");
    for (j = 0; j <= 3; j++) {
      printf("        %d          ", numero[i][j]);
    }
  }
}