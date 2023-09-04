
#include <stdio.h>
#include <stdlib.h>
struct reg_pessoa{
  char nome[30], email[50], fone[15];
} pessoa[5];
int i;

void proc_cadastrar();
void proc_pesquisa();

int main ()
{
   char opcao;
   proc_cadastrar();
   do{
      proc_pesquisa();
      do{
        printf("\n\ncontinuar pesquisa (S/N):");
        scanf("%c",&opcao);
        setbuf(stdin,NULL);
      }while (opcao != 'S' && opcao != 'N');
   }while (opcao == 'S');
   return(0);
}
void proc_cadastrar(){
  for (i=0;i<5;i++){
    printf("informe nome:");
    gets(pessoa[i].nome);
    printf("informe email:");
    gets(pessoa[i].email);
    printf("informe telefone:");
    gets(pessoa[i].fone);
  }
}

void proc_pesquisa(){
   int achou;
   char pesq[30];
   printf("informe nome para pesquisa:");
   gets(pesq);
   achou = 0;
   i = 0;
   while (i < 5 && achou == 0){
      if (strcmp(pesq,pessoa[i].nome)==0)
         achou = 1;
      else
         i++;
   }
   if (achou == 1)
      printf("\nencontrado nome: %s telefone %s",pessoa[i].nome, pessoa[i].fone);
   else
      printf("\nnao encontrado %s",pesq);
}
//---------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
struct reg_pessoa{
  char nome[30], email[50], fone[15];
} pessoa[5], aux;
int i;

void proc_cadastrar();
void proc_ordena();
void proc_pesquisa();

int main ()
{
   char opcao;
   proc_cadastrar();
   proc_ordena();
   do{
      proc_pesquisa();
      do{
        printf("\n\ncontinuar pesquisa (S/N):");
        scanf("%c",&opcao);
        setbuf(stdin,NULL);
      }while (opcao != 'S' && opcao != 'N');
   }while (opcao == 'S');
   return(0);
}
void proc_cadastrar(){
  for (i=0;i<5;i++){
    printf("informe nome:");
    gets(pessoa[i].nome);
    printf("informe email:");
    gets(pessoa[i].email);
    printf("informe telefone:");
    gets(pessoa[i].fone);
  }
}

void proc_ordena(){
  int j;
  for (i=0; i<4; i++){
    for (j=i+1; j<5; j++){
      if (strcmp(pessoa[i].nome,pessoa[j].nome)==1){
          aux = pessoa[i];
          pessoa[i] = pessoa[j];
          pessoa[j] = aux;
      }
    }
  }
}

void proc_pesquisa(){
   int achou,inicio, fim, meio;
   char pesq[30];
   printf("informe nome para pesquisa:");
   gets(pesq);
   achou = 0;
   inicio = 0;
   fim = 4;
   while (inicio <= fim && achou == 0){
      meio = (inicio + fim)  / 2;
      if (strcmp(pesq,pessoa[meio].nome)==0)
         achou = 1;
      else if (strcmp(pesq,pessoa[meio].nome)==1)
              inicio = meio + 1;
           else
              fim = meio - 1;
   }
   if (achou == 1)
      printf("\nencontrado nome: %s telefone %s",pessoa[meio].nome, pessoa[meio].fone);
   else
      printf("\nnao encontrado %s",pesq);
}

-------------------------------------------------------
utilizando menus
#include <stdio.h>
#include <stdlib.h>
struct reg_pessoa{
  char nome[30], email[50], fone[15];
} pessoa[5], aux;
int i;

void proc_cadastrar();
void proc_ordena();
void proc_pesquisa();
void proc_pesquisa_seq();

int main ()
{
   int opcao;
   do{
     printf("\n1-cadastrar");
     printf("\n2-pesquisa sequencial");
     printf("\n3-pesquisa binaria");
     printf("\n4-fim");
     printf("\ninforme opcao:");
     scanf("%d",&opcao);
     setbuf(stdin,NULL);
     switch (opcao){
        case 1: proc_cadastrar(); break;
        case 2: proc_pesquisa_seq(); break;
        case 3: proc_ordena();
                proc_pesquisa(); break;
     }
   }while (opcao != 4);
   return(0);
}
void proc_cadastrar(){
  for (i=0;i<5;i++){
    printf("informe nome:");
    gets(pessoa[i].nome);
    printf("informe email:");
    gets(pessoa[i].email);
    printf("informe telefone:");
    gets(pessoa[i].fone);
  }
}

void proc_ordena(){
  int j;
  for (i=0; i<4; i++){
    for (j=i+1; j<5; j++){
      if (strcmp(pessoa[i].nome,pessoa[j].nome)==1){
          aux = pessoa[i];
          pessoa[i] = pessoa[j];
          pessoa[j] = aux;
      }
    }
  }
}

void proc_pesquisa(){
   int achou,inicio, fim, meio;
   char pesq[30];
   printf("informe nome para pesquisa:");
   gets(pesq);
   achou = 0;
   inicio = 0;
   fim = 4;
   while (inicio <= fim && achou == 0){
      meio = (inicio + fim)  / 2;
      if (strcmp(pesq,pessoa[meio].nome)==0)
         achou = 1;
      else if (strcmp(pesq,pessoa[meio].nome)==1)
              inicio = meio + 1;
           else
              fim = meio - 1;
   }
   if (achou == 1)
      printf("\nencontrado nome: %s telefone %s",pessoa[meio].nome, pessoa[meio].fone);
   else
      printf("\nnao encontrado %s",pesq);
}
void proc_pesquisa_seq(){
   int achou;
   char pesq[30];
   printf("informe nome para pesquisa:");
   gets(pesq);
   achou = 0;
   i = 0;
   while (i < 5 && achou == 0){
      if (strcmp(pesq,pessoa[i].nome)==0)
         achou = 1;
      else
         i++;
   }
   if (achou == 1)
      printf("\nencontrado nome: %s telefone %s",pessoa[i].nome, pessoa[i].fone);
   else
      printf("\nnao encontrado %s",pesq);
}
