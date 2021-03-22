#include<stdio.h>
#include<stdlib.h>

void lervetor(int v[]);
void pen (int v[], int a [], int b[]);
int nulos (int v []);
void imprimirVetor (int v[], int a [], int b[]);




int main()
{
    const int MAX=10;
    int v[MAX], a[MAX], b[MAX];
    int quantnulos;

    lervetor(v);
    pen(v,a,b);
    quantnulos=nulos(v);
    printf("Quantidade de nulos: %d \n",quantnulos);
    imprimirVetor(v,a,b);
    system("PAUSE");


    return 0;
    system("PAUSE");
}
void lervetor (int v[])
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d",&v[i]);
    }
}
void pen(int v[], int a [], int b[])
{
    int positivo=0;
    int negativo=0;
    int i;

    for(i=0; i<10; i++)
    {
        if(v[i]>0)
        {
            a[positivo]=v[i];
            positivo++;
        }
        else if (v[i]<0)
        {
            b[negativo]=v[i];
            negativo++;
        }
    }
}
int nulos(int v[]){
    int d;
    int i;
    for(i=0; i<10; i++){
        if (v[i]==0){
            d++;
        }
    }
    return d;
}
imprimirVetor(int v[], int a [], int b[]){
    int i;
    int positivo;
    for(i=0;i<10;i++){
        printf("%d | ",v[i]);
    }



}


