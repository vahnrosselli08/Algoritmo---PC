#include <stdio.h>

int main() {
    float venda_dia;
    float total_vendas = 0;
    printf("REGISTRO DE VENDAS DA SEMANA\n\n");

    for (int dia = 1; dia <= 7; dia++) {
        printf("Digite o valor das vendas do dia %d (R$): ", dia);
        scanf("%f", &venda_dia);

        total_vendas = total_vendas + venda_dia;
    }
    printf("\n------------------------------------\n");
    printf("Total vendido na semana: R$ %.2f\n", total_vendas);

    return 0;
}
