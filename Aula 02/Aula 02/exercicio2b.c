#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE,"");
    int retangulo;
    float lado_a, lado_b, perimetro, area;
    printf("Digite um valor de area (em cm): ");
    scanf("%f", &lado_a);
    printf("Digite o valor de outro lado (em cm): ");
    scanf("%f", &lado_b);
    perimetro = 2*lado_a + 2*lado_b;
    printf("Perímetro: %.2f cm ", perimetro);
    area = lado_a+lado_b;
    printf("Área do retângulo: %.2f cm²", area);
    return 0;


}
