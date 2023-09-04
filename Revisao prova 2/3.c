/*
3) Escrever um programa para ler nome, sexo e idade de um grupo de pessoas calcular e
escrever o nome e idade da pessoa do sexo masculino mais velho, nome e idade da
pessoa do sexo feminino mais nova, final da entrada de dados é conhecido quando
informado uma idade negativa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int idade, idadeF, idadeM;
  char nome[100], nomeF[100], nomeM[100], sex[1];
  printf("Digite aqui os nomes\n");
  do {
    printf("\nQual sua idade?\n");
    scanf("%d", &idade);
    setbuf(stdin, NULL);
    if (idade <= 0)
      break;
    printf("\nQual seu nome?\n");
    gets(nome);
    setbuf(stdin, NULL);
    printf("Qual seu sexo?\n");
    scanf("%c", &sex);
    setbuf(stdin, NULL);
    if (idadeM == 0 && sex == 'M') {
      idadeM = idade;
      strcpy(nomeM, nome);
    }
    if (idadeF == 0 && sex == 'F') {
      idadeF = idade;
      strcpy(nomeF, nome);
    }
    if (sex == "M") {
      if (idade > idadeM) {
        idadeM = idade;
        strcpy(nomeM, nome);
      }
    }
    else {
      if (idade < idadeF) {
        idadeF = idade;
        strcpy(nomeF, nome);
      }
    }
  } while (idade > 0);
  printf("\n %s e o homem mais velho com %d anos", nomeM, idadeM);
  printf("\n %s e a mulher mais velha com %d anos", nomeF, idadeF);

}