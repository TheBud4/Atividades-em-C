#include <stdio.h>
#include <stdlib.h>

struct reg_recibo {
    int banco, agencia;
    char pessoa[256], cc[256];
}recibo;

void recibos() {
    printf("\n ----------Cadastro de Recibos----------\n");
};