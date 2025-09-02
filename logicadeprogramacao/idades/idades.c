/******************************************************************************

RECEbe idades ate o input ser 0

*******************************************************************************/
#include <stdio.h>

int main()
{
int idade;
int quantidade =0;
int soma = 0;
int media = 0;
int maior=0;
int menor = 0;
printf("digite a idade: ");
scanf("%d",&idade);
    while(idade!=0){
    
    quantidade++;
    soma=idade+soma;
    if (quantidade == 1){
        maior = idade;
        menor= idade;
    }else{
    if(idade>maior){
        maior =idade;
    }if(idade<menor&& idade !=0){
        menor = idade;
    }
        
    }
   printf("digite a idade %d :",quantidade+1);
    scanf("%d",&idade); 
}

media =soma /quantidade;
printf("a media equivale a = %d\n",media);
printf("a quantidade de pessoas equivale a %d\n",quantidade);
printf("a maior idade e= %d\n",maior);
printf("a menor idade = %d\n",menor);


    return 0;
}
