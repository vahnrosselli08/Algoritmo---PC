#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;
    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);
    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);
    imc = peso / pow(altura, 2);
    if (imc < 20){
        printf("Você está abaixo do peso.\nimc: %.2f kg/m²", imc);
    }
    else if (imc < 24.9){
        printf("Você está com o peso normal.\nimc: %.2f kg/m²", imc);
    }
    else if (imc < 29.9){
        printf("Você está sobrepeso.\nimc: %.2f kg/m²", imc);
    }
    else if (imc <39.9){
        printf("Você está obeso.\nimc: %.2f kg/m²", imc);
    }
    else {
        printf("Você está com obesidade mórbida.\nimc: %.2f kg/m²", imc);
    }
    return 0;
}
