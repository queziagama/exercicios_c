#include <stdio.h>
#include <math.h>

int main()
{
    float IMC,peso,altura; 
    
    printf("Informe o peso (em Kg): \n");
    scanf("%f",&peso);

    printf("Informe a altura (em metros, utilize o formato 0.00): \n");
    scanf("%f",&altura);
    
    altura = pow(altura,2);
    IMC = peso/altura;
    
    printf("O valor do IMC é: %.2f",IMC);
    return 0;
}
