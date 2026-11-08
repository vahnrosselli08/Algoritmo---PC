#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = pow(b, 2) - (4*a*c);

    if (delta >= 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

    printf("\nRaizes da equação: ");
    printf("\nx1 = %.2f", x1);
    printf("\nx2 = %.2f", x2);

    } else {
    printf("Não existem raízes reais!");
    }


    return 0;


}
