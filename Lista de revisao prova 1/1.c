/*
1) Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um outro
desconto de 5% sobre o valor restante do salário bruto, a título de um determinado
imposto. Faça um algoritmo que leia o salário bruto de um cidadão e imprima o seu
salário líquido
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  float salario;
  system("cls");
  printf("Informe seu salario bruto: \n");
  scanf("%f \n ", &salario);
  salario = salario - (salario * 0.10);
  salario = salario - (salario * 0.05);
  printf("Seu salario liquido e: %0.2f", salario);
  printf("\n endline");
};