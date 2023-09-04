#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
FILE *arquivo = NULL;
char palavra[80];
arquivo = fopen("database.txt", "r+");
if (arquivo== NULL)
printf("Erro ao abrir");
else {
printf("Arquivo aberto com sucesso!");
fprintf(arquivo, "texto a ser gravado 2");
fscanf(arquivo,palavra);
printf("%s",palavra);
fclose(arquivo);

}
}