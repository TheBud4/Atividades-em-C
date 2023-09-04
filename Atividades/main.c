#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

// ex 1 aula 11

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, j;
    float  nota1[5], nota2[5], media, aux2;
    char nome[5][30], aux[30];

    for (i = 0;i < 5; i++) {
        printf("informe nome:");
        gets(nome[i]);
        setbuf(stdin, NULL);

        printf("informe a primeira nota:");
        scanf("%f", &nota1[i]);
        setbuf(stdin, NULL);

        printf("informe a segunda nota:");
        scanf("%f", &nota2[i]);
        setbuf(stdin, NULL);

    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1;j < 5;j++) {
            if (strcmp(nome[i], nome[j]) == 1) {
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);

                nota1[i] = nota1[j];
                nota1[j] = aux2;
                aux2 = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = aux2;

            }
        }
    }

    for (i = 0;i < 5;i++) {
        media = (nota1[i] + nota2[i]) / 2;

        if (media >= 7)
            printf("\n %s aprovado com media %.1f", nome[i], media);

        else
            printf("\n %s reprovado com media %.1f", nome[i], media);
    }

    return 0;
}
