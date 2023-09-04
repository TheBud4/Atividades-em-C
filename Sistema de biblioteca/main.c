#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "./livros.c"
#include "./perfis.c"
#include "./recibos.c"

int main() {
    int op;
    do {
        printf("\nInforme sua opcao\n");
        printf("\n 1 - Adicionar um recibo/Consultar Recibos \n 2 - Adicionar Um Livro/Consultar Livros \n 3 - Adicionar uma Pessoa/Consultar Pessoas \n 4 - Sair \n");
        scanf("\n\t %d", &op);
        switch (op) {
        case 1:
            recibos();
            break;
        case 2:
            livros();
            break;
        case 3:
            perfis();
            break;
        case 4:
            printf("\n Saindo do programa");
            break;
        default:
            printf("\n Opcao invalida");
            break;
        }
    } while (op != 4);
}
