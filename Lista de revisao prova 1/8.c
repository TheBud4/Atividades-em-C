/*
8) Crie um algoritmo que solicita ao usuário para digitar um número e mostra-o por
extenso. Este número deve variar entre 1 e 10. Se o usuário introduzir um número que
não está neste intervalo, mostre: "Número inválido".
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("digite um numero: \n");
  scanf("%d", &numero);
  switch (numero)
  {
  case 1:
    printf("um");
    break;
  case 2:
    printf("dois");
    break;
  case 3:
    printf("tres");
    break;
  case 4:
    printf("quatro");
    break;
  case 5:
    printf("cinco");
    break;
  case 6:
    printf("seis");
    break;
  case 7:
    printf("sete");
    break;
  case 8:
    printf("oito");
    break;
  case 9:
    printf("nove");
    break;
  case 10:
    printf("X");
    break;
  default:
    printf("numero invalido");
    break;
  }
}