#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int quant_horas, quant_min, quant_total;
    printf("Hora? ");
    scanf("%d", &quant_horas);
    printf("Minutos? ");
    scanf("%d", &quant_min);
    quant_total = (quant_horas)*60+quant_min;
    printf("Já se passaram %d minutos desde o início do dia.", quant_total);
    return 0;


}
