#include<stdio.h>
#include<stdlib.h>
int main(){

    int familia,cpb,aa, tomate;
    float leite,feijao,farinha,banana,cafe,oleo, manteiga;

    // ler a quantidade de familia

    printf ("Digite para quantas familias recebera a cesta basica:\n");
    scanf("%d",&familia);

    // calculando a quantindade de alimentps
    cpb =(6*familia);
    leite = (7.5*familia);
    aa=(3*familia);
    feijao=(4.5*familia);
    farinha=(1.5*familia);
    cafe=(0.6*familia);
    oleo= (0.9*familia);
    manteiga= (0.75*familia);
    tomate= ( 9*familia);
    banana= (7.5*familia);

    // mostrar para o usuário

    printf("Quantidades em kg ou litros:\n");
    printf("Carne:%d \n",cpb);
    printf("leite:%.2f\n",leite);
    printf("arroz %d \n",aa);
    printf("feijao:%.2f \n",feijao);
    printf("farinha de trigo:%.2f\n",farinha);
    printf("cafe: %.2f\n",cafe);
    printf("oleo:%.2f \n",oleo);
    printf("manteiga %.2f \n",manteiga);
    printf("acucar:%.2f \n",aa);
    printf("Pao:%d \n",cpb);
    printf("batata: %d \n",cpb);
    printf("duzias de banana:%.2f \n",banana);





















    return 0;
    system("PAUSE");

}
