#include<stdio.h>
#include<locale.h>
int main()

{
    setlocale(LC_CTYPE,"");
    float massa, quantidade_agua;
    printf("Digite a massa corporal (em KG): ");
    scanf("%f", &massa);
    quantidade_agua = massa*35/1000;
    printf("Quantidade aproximada de água recomendada por dia: %.2f", quantidade_agua);
    return 0;
}
