#include <stdio.h>

//Estruturas de repetição  if, else, else if
int main(){
    //Variáveis
    int idade;
    printf("Qual é a sua idade ?\n");
    //Entrada
    scanf("%d" , &idade);

    //Iniciar estruturas de condição 
    if (idade < 18){
        printf("Você é menor de idade \n");
    }else if (idade >= 18 && idade < 60){
        printf("Você é adulto \n");
    }else{
        printf("Você é idoso \n");
    }

    //Saída
    printf("Sua idade é = %d \n",idade);
    return 0;
}