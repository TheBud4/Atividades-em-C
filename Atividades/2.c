#include <stdio.h>
#include <stdlib.h>

int fatorial(int numero) {
  int fatorial = 1, i;
  for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;
  }
  return fatorial;
}
int main() {
  int numero, result;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  result = fatorial(numero);
  printf("%d", result);
  oi();
}