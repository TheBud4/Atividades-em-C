/*
Foi realizada uma pesquisa entre os habitantes de uma certa região. Foram coletados
os dados de idade, sexo(M/F) e salário. Faça um algoritmo que informe.
a) A média de salário do grupo.
b) Maior e menor idade do grupo;
c) Quantidade de mulheres com salário até R$ 100,00
*/

#include<stdio.h>
#include <stdlib.h>

int main() {
  int idade, i = 1, op, maioridade, quant;
  float salario, media;
  char sexo[1];
  while (i <= 2) {
    printf("Informe seu sexo: \n");
    getche(sexo);
    printf("\nInforme seu salario: \n");
    scanf("%f", &salario);
    printf("\nInforme sua idade: \n");
    scanf("%d", &idade);
    i++;
    
    if (sexo[0] == 'M' || sexo[0] == 'm') {
      if (idade > maioridade) {
        maioridade = idade;
      }
    }
    else {
      if (idade < maioridade) {
        maioridade = idade;
      }
    }
    if (salario <= 2000) {
      quant++;
    }
    else {
      quant = 0;
    }
  }
  system("cls");
  printf("Qual informacao voce quer acessar? \n");
  printf("\n1- Acessar a media salarial do grupo\n");
  printf("\n2- Acessar a menor e maior idade do grupo \n");
  printf("\n3- Acessar a quantidade de mulheres com salario ate R$ 2000,00\n");
  op = 1;

  switch (op) {
  case 1:
    printf(
      "Acessando a media salarial do grupo: %.2f\n",
      media = 2 / salario);
    break;

  case 2:
    printf("Acessando a menor e maior idade do grupo: %.2f", maioridade);
    break;

  case 3:
    printf("Acessando a quantidade de mulheres com salario até R$ 2000");
    printf("\n %d", quant);
    break;
  default:
    printf("\nNão é uma opção valida");
    break;
  }
\
}