
#include <stdio.h>

int main()
{
    int numeros[10];
    int maior ;
    int menor;
    for (int i=0;i<10;i++){
    printf("Digite o  numero %d= ",i+1);
    scanf("%d",&numeros[i]);
    }
    menor = maior = numeros[0];
    
    for(int i=1;i<10;i++){
        if (numeros[i]>maior){
            maior = numeros[i];
        }
    if (numeros[i]<menor){
        menor = numeros[i];
    }
    }
    
 
    int soma = maior+menor;
    float media = (maior+menor)/2;
    printf("O maior numero e =%d\n",maior);
    printf("o menor numero e =%d\n",menor);

printf("soma = %d\n",soma);
printf("media = %.2f\n",media);

    return 0;
}
