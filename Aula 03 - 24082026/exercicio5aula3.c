#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, IMC;
    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f", &peso);
    printf("Qual é a altura da pessoa em metros? ");
    scanf("%f", &altura);
    IMC = peso/(altura*altura);
    printf("O índice de Massa Corpotal é %.2fkg/m²", IMC);



    return 0;
}
