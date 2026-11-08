#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
    int quant_manha, quant_tarde, quant_total;
    printf("Quantidade recebida pela manhã:");
    scanf("%d", &quant_manha);
    printf("Quantidade recebida à tarde: ");
    scanf("%d", &quant_tarde);
    quant_total = quant_manha + quant_tarde;
    printf("Total de produtos recebidos no dia: %d", quant_total);

    return 0;
}
