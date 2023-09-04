/*1) Escrever um programa para ler nome e idade de um grupo de 50 pessoas, calcular e
escrever o nome e idade da pessoa mais nova e mais velha. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  system("cls");
  char nome[40], velho[40], novo[40];
  int idade, idadevelho, idadenovo, i;

  for (i = 1; i < 5; i++) {
    printf("Digite o nome: ");
    gets(nome);
    setbuf(stdin, NULL);
    printf("\nInforme a idade:");
    scanf("%d", &idade);
    setbuf(stdin, NULL);
    if (i == 1) {
      idadevelho = idade;
      idadenovo = idade;
      strcpy(velho, nome);
      strcpy(novo, nome);
    }
    else {
      if (idade > idadevelho) {
        idadevelho = idade;
        strcpy(velho, nome);
      }
      if (idade < idadenovo) {
        idadenovo = idade;
        strcpy(novo, nome);
      }

    }
  }

  printf("velho = %s\n", velho);
  printf("novo = %s\n", novo);
}