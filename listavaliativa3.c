#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void lerelementos(int x[], int y[]);
void novovetor(int x[],int y[], int r[]);
void imprimirnovovetor(int r[]);


int main(){

    int x[MAX], y[MAX], r[20];
    lerelementos(x,y);
    novovetor(x,y,r);
    printf("\nNovo vetor:\n");
    imprimirnovovetor(r);





    return 0;
    system("PAUSE");
}
void lerelementos( int x[], int y[]){
    int i;

    for(i=0;i<10;i++){
      printf("Digite os valores para o vetor x:\n");
      scanf("%d",&x[i]);
      printf("Digite os valores para o vetor y:\n");
      scanf("%d",&y[i]);
    }
}
void novovetor(int x[],int y[], int r[]){
    int i;
    int a=0;
    int b=1;
    for(i=0; i<10; i++){
            r[a] = y[i];
            a+=2;
    }

    for(i=0; i<10; i++){
            r[b] = x[i];
            b+=2;
    }
}
void imprimirnovovetor(int r[]){
    int i;
    for(i=0;i<20;i++){
     printf(" %d | ",r[i]);
    }

}




