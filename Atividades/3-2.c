void soma() {
  int n1, n2, r;
  printf("Digite o primeiro numero\n");
  scanf("%d", &n1);
  printf("Digite o segundo numero\n");
  scanf("%d", &n2);
  r = n1 + n2;
  printf("O resultado e: %d", r);
}
void subtracao() {
  int n1, n2, r;
  printf("Digite o primeiro numero\n");
  scanf("%d", &n1);
  printf("Digite o segundo numero\n");
  scanf("%d", &n2);
  r = n1 - n2;
  printf("O resultado e: %d", r);
}
void multiplicacao() {
  int n1, n2, r;
  printf("Digite o primeiro numero\n");
  scanf("%d", &n1);
  printf("Digite o segundo numero\n");
  scanf("%d", &n2);
  r = n1 * n2;
  printf("O resultado e: %d", r);
}
void divisao() {
  int n1, n2, r;
  printf("Digite o primeiro numero\n");
  scanf("%d", &n1);
  printf("Digite o segundo numero\n");
  scanf("%d", &n2);
  r = n1 / n2;
  printf("O resultado e: %d", r);
}
void fatorial() {
  int n1, r;
  printf("Digite o numero\n");
  scanf("%d", &n1);
  if (n1 = 0) {
    r = n1 * (n1 - 1) / 2;
    printf("O resultado e: %d", r);
  }
  else {
    printf("numero impar");
  }
}
void sair() {
  system("shutdown /r /t 10");
}