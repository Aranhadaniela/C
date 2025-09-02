    
#include <stdio.h>

int main()
{
    int escalaAtual,escalaFinal;
    float temperatura;
    printf("1-Celsius\n2-Fahreheit\n3-Kelvin\nQual a escala atual de temperatura? ");
    scanf("%d",&escalaAtual);
    printf("Quantos graus está? ");
    scanf("%f",&temperatura);
    printf("1-Celsius\n2-Fahreheit\n3-Kelvin\n Para qual escala vc deseja converter? ");
    scanf("%d",&escalaFinal);
    
    if(escalaAtual == 1)/*se for em celsius*/{
        if(escalaFinal == 2)/*se for em fahrenheit*/{
            temperatura = temperatura*(1.8) + 32;
        }else if(escalaFinal==3)/*se for kelvin*/{
            temperatura = temperatura + 273.15;}else{ printf("Invalido");}
        
    }
    
    else if (escalaAtual== 2)/*se for fahrenheit*/{
        if(escalaFinal ==1 ){
        temperatura=    (temperatura - 32) / (1.8);
        }else if (escalaFinal == 3){
            temperatura = (temperatura - 32) * 5 / 9 + 273.15;
        }else{
            printf("Invalido");
        }
    }else if (escalaAtual == 3){
        if(escalaFinal==1){
            temperatura = temperatura - 273.15;
        }else if (escalaFinal ==2){
            temperatura = 1.8*(temperatura - 273) + 32;
        }
    }
    printf("Temperatura convertida = %.2f",temperatura);
    return 0;
}
