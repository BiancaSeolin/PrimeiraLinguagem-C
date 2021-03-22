#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define t 50
typedef struct{
    char nome[t];
    int conta;
    float saldo;
}Cliente;
Cliente cliente [t];

void imprimirmenu();
void cadastrarconta();
void saque();
void deposito();
void consulta();

int main(){
    int opcao, cadastrodeconta=0 ;
    char sair='n';
    while(sair!='S'){
        imprimirmenu();
        printf("Digite sua escolha:/n");
        scanf("%d",&opcao);
        switch (opcao){
            case 1: {
                cadastrarconta(cadastrodeconta);
                cadastrodeconta++;
                if(cadastrodeconta>50){
                 printf("procedimento nao e possivel:/n");
                }
                break;
            }
            case 2:{
                saque();
                break;
            }
            case 3:{
                deposito();
                break;
            }
            case 4:{
                consulta();
                break;

            }
            default:{
             printf("Escolha invalida\n");
            }

        }

        getchar();
        printf("Digite S para sair ou qualquer outra letra para prosseguir:\n");
        scanf("%c",&sair);
        sair=toupper(sair);
    }

    return 0;
    system("PAUSE");
}
void imprimirmenu(){
    printf("*******************************");
    printf("MENU:");
    printf("Digite 1 >> cadastrar conta:\n");
    printf("Digite 2 >> Sacar dinheiro\n ");
    printf("Digite 3 >> fazer deposito\n");
    printf("Digite 4 >> consultar conta\n");
    printf("*******************************");
}
void cadastrarconta(){
    Cliente cliente;
    int num;
    printf("Digite o numero da conta:\n");
    scanf("%d",&num);
    printf("Digite seu nome:\n");
    //scanf("%s", &cliente[num].nome);
    cliente[num].conta=num;
}
void saque(){
    int num, contaa;
    char nomee;
    float saque;
    Cliente cliente;
    printf("Digite seu nome:\n");
    scanf("%s",&nomee);
    printf("Digite o numero da sua conta:\n");
    scanf("%d",&num);
    printf("Digite o valor do saque:\n");
    scanf("%f",&saque);

    if (cliente.nome==nomee&&cliente[num].conta==num){
        if(cliente[num].saldo>=saque){
        printf("Saque Efetuado com sucesso!/n");
        cliente[num].saldo-=saque;
    }
    else
        printf("Erro: O valor solicitado para saque e maior que o saldo\n");
    }


}
void deposito(){
    int num;
    char nomee;
    float deposito;
    Cliente cliente;
    printf("Digite seu nome:\n");
    scanf("%s",&nomee);
    printf("Digite o numero da sua conta:\n");
    scanf("%d",&num);
    printf("Digite o valor do deposito:\n");
    scanf("%f",&deposito);
    if (cliente.nome==nomee&&cliente[num].conta==num){
        if(deposito>0){
        printf("Deposito Efetuado com sucesso!/n");
        cliente[num].saldo+=deposito;
    }
    }


}

void consulta (){
    int num;
    char nomee;
    float deposito;
    printf("Digite seu nome:\n");
    scanf("%s",&nomee);
    printf("Digite o numero da sua conta:\n");
    scanf("%d",&num);





}

