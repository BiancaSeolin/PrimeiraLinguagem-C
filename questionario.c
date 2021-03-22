#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2
typedef struct{
    char nome[30];
    char telefone[20];
} Contato;




int main()
{

    Contato c[TAM];
    int i;
    strcpy(c.nome, "Ana");
    strcpy(c.telefone, "91111-2222");
    strcpy(c.nome, "Juliana");
    strcpy(c.telefone, "93333-4444");

    for(i = 0; i < TAM; i++){
        printf("Nome: %s - Telefone: %s\n", c.nome, c.telefone);
    }





    return 0;
    system("PAUSE");
}
