#include <stdio.h>

int main() {
    struct reg_loja {
        char nome[256],
            endereco[256],
            telefone[256];
    } pessoa[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("\nInforme nome:\n");
        gets(pessoa[i].nome);
        setbuf(stdin, NULL);
        printf("\n Informe endereco: \n");
        gets(pessoa[i].endereco);
        setbuf(stdin, NULL);
        printf("\n Informe telefone:\n");
        gets(pessoa[i].telefone);
        setbuf(stdin, NULL);
    }
    for (i = 0; i <= 3; i++) {
        printf("\nNome: %d\n Endereco: %d\n Telefone: %d\n", pessoa[i].nome, pessoa[i].endereco, pessoa[i].telefone);
    }
    return 201;
}