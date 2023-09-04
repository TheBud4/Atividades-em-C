/*
9) Escreva um algoritmo para simular uma calculadora utilizando a instrução escolha-caso
para determinar a operação que deve ser executada, conforme o usuário escolher no
menu de opções. Conforme a opção escolhida pelo usuário, uma operação diferente da
calculadora deve ser executada. (ler dois números para executar e mostrar o resultado).
*/

#include <stdio.h>
#include<stdlib.h>

int main() {
  int a, b;
  char op[1];
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite a operação desejada: ");
  getche(op);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  switch (op[1]) {
  case '+':
    printf("%d + %d = %d\n", a, b, a + b);
    break;
  case '-':
    printf("%d - %d = %d\n", a, b, a - b);
    break;
  case '*':
    printf("%d * %d = %d\n", a, b, a * b);
    break;
  case '/':
    printf("%d / %d = %d\n", a, b, a / b);
    break;
  default:
    printf("Opção invalida\n");
    break;
  }

}