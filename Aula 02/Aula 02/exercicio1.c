#include<stdio.h>
#include<locale.h>
#define PI 3.14

int main()
{
    setlocale(LC_CTYPE, "");

    float raio, perimetro;
    printf("Qual a medida de raio (em cm)? ");
    scanf("%f", &raio);
    perimetro = 2*PI*raio;
    printf("Total do perímetro: %f", perimetro);
    return 0;



}
