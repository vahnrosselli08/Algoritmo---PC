#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float poten_equip, hora_func, consumo;
    printf("Potência do equipamento (W): ");
    scanf("%f", &poten_equip);
    printf("Horas de uso por dia: ");
    scanf("%f", &hora_func);
    consumo = (float)(poten_equip*hora_func*30)/1000;
    printf("Consumo mensal: %.2fkWh", consumo);
    return 0;

}
