#include <stdio.h>
#include <stdlib.h>
#include "./3-2.c"

int main() {
  int op;
  printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Fatorial\n6 - Sair\n");
  printf("Digite a operacao\n");
  scanf("%d", &op);
  switch (op) {
  case 1:
    soma();
    break;
  case 2:
    subtracao();
    break;
  case 3:
    multiplicacao();
    break;
  case 4:
    divisao();
    break;
  case 5:
    fatorial();
    break;
  case 6:
    sair();
    break;
  default:
    printf("Opcao invalida");
  }
  return 0;


}
