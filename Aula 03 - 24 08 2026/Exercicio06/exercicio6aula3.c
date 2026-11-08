#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float largura, area, comp, valor_caixas, quant_caixas, valor_total, area_total;
    printf("Qual é a largura da área em metros? ");
    scanf("%f", &largura);
    printf("Qual é o comprimento da área em metros? ");
    scanf("%f", &comp);
    printf("Qual é o valor de cada caixa? ");
    scanf("%f", &valor_caixas);
    area_total = largura * comp;
    quant_caixas = ceil(area_total/2.5);
    valor_total = quant_caixas * valor_caixas;
    printf("Area total a ser revestida: %.2fm²\n", area_total);
    printf("Quantidade de caixas necessárias: %.2f\n", quant_caixas);
    printf("Custo total da compra: R$%.2f", valor_total);

    return 0;


}
