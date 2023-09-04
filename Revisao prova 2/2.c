/*
2) Escrever um programa para ler nome e altura de um grupo de pessoas, calcular e
escreve o nome e altura da pessoa mais alta e mais baixa, final da entrada de dados é
conhecido quanto informado “FIM” como nome da pessoa.
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main() {
  int altura, a_maisalta, a_maisbaixa, i = 1;
  char nome[100], n_maisalta[100], n_maisbaixa[100];
  do {
    printf("Qual seu nome? \n");
    gets(nome);
    setbuf(stdin, NULL);
    if (strcmp(nome, "fim") == 0)
      break;
    printf("Qual sua altura? \n");
    scanf("%d", &altura);
    setbuf(stdin, NULL);
    if (i == 1) {
      a_maisalta = altura;
      a_maisbaixa = altura;
      strcpy(n_maisalta, nome);
      strcpy(n_maisbaixa, nome);
    }
    if (altura > a_maisalta) {
      a_maisalta = altura;
      strcpy(n_maisalta, nome);
    }
    else if (altura < a_maisbaixa) {
      a_maisbaixa = altura;
      strcpy(n_maisbaixa, nome);
    };
    i++;

  } while (strcmp(nome, "fim") != 0);
  if (i == 1) {
    printf("Nenhum nome informado");
  }
  else {
    printf("\n %s e o mais alto! \n", n_maisalta);
    printf("\n %s e o mais baixo! \n", n_maisbaixa);
  }

};