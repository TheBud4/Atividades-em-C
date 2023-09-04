/*

7) Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e apresente o
nome da mais pesada e o nome da mais alta.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  system("cls");
  int alturas[2], i, pesos[2], media;
  char nomes[2][50];
  for (i = 0; i <= 1; i++) {
    printf("Informe seu nome: \n");
    gets(nomes[i]);
    setbuf(stdin, NULL);
    printf("Informe seu peso: \n");
    scanf("%d", &pesos[i]);
    printf("Informe sua altura: \n");
    scanf("%d", &alturas[i]);
    setbuf(stdin, NULL);
  };
  system("cls");
  for (i = 0; i <= 1; i++) {
    printf("%s tem %d de altura e pesa %d \n", nomes[i], alturas[i], pesos[i]);
  }
  i = 1;
  int x = alturas[0], y = pesos[0], Malto, Mpesado;
  while (i < 2) {

    if (alturas[i] > x)
    {
      x = alturas[i];
    }

    if (pesos[i] > y)
    {
      y = pesos[i];

    }
    i++;
  }
  media = (alturas[0] + alturas[1]) / 2;
  printf("O mais alto e %d \n", x);
  printf("A media de altura e %d \n", media);
  printf("O mais pesado e: %d \n", y);
}