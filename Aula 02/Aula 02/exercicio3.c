#include<stdio.h>
#include<locale.h>



int main()
{
    setlocale(LC_CTYPE,"");
    int quantidade_semanas;
    float tempo_gestacao;
    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%d", &quantidade_semanas);
    tempo_gestacao = (float) (quantidade_semanas*7)/30;
    printf("Tempo de gestação aproximado: %.2f meses", tempo_gestacao);
    return 0;


}
