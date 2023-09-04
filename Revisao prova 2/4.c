/*
4)	Escrever um programa para ler as temperaturas diárias de um mês,
 calcular e escrever a temperatura mais alta e mais baixa registrada bem como o dia que ocorreu.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int i, dia, temperatura, mais_alta;
  for (i = 1; i <= 5; i++) {
    printf("\nEscreva a temperatura do dia %d\n", i);
    scanf("%d", &temperatura);
    if (i == 1) {
      mais_alta = temperatura;
      dia = i;
    }
    else if (temperatura > mais_alta) {
      mais_alta = temperatura;
      dia = i;
    }
  }
  printf("\n a temperatura mais alta foi no dia %d, de %d Graus Farenheit", dia, mais_alta);

}