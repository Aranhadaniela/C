
#include <stdio.h>

int main()
{
    float lados[3];
    for(int i =0;i<=2;i++){
    
    printf("digite um dos comprimentos do triangulo\n");
    scanf("%f",&lados[i]);
    if(lados[i]<=0){
        printf("0 nao e um comprimento valido\n");
        break;
        
    }}
    
    if(lados[0]+lados[1]>lados[2] && lados[0]+lados[2]>lados[1] && lados[1]+lados[2]>lados[0])/*se os valores formam um triangulo*/ {
        
        
        if(lados[0]==lados[1]&& lados[1]==lados[2]){
            printf("os valores formam um triangulo equilatero");
        }else if(lados[1]==lados[0]||lados[1]==lados[2]||lados[0]==lados[2]){
            printf("os valores formam um triangulo isosceles");
        }else{
            printf("os valores formam um triangulo escaleno");
        }
        
    }else{
        printf("Os valores inseridos nao formam um triangulo\n");
    }
    
    
    
    return 0;
}
