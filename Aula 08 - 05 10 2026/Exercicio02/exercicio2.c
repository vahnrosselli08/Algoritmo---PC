#include<stdio.h>
#include<locale.h>
#define TAM 8

int main()
{
    setlocale(LC_CTYPE, "");

   int i, acima_media=0;
   float valores [TAM], soma=0, media, maior_valor;

   for (i=0; i<TAM; i++) {
        printf("Digite o %dº valor: ", (i+1));
        scanf("%f", &valores [i]);
        soma += valores[i];
   }


    media = soma/TAM;
    maior_valor = valores[0];

    for (i=0; i<TAM; i++){
        if (valores[i] > media)
            acima_media++;
        if (valores[i] > maior_valor){
            maior_valor = valores[i];

    }
    }


    printf("Média dos valores: R$ %.2f\n", media);
    printf("Quantidade de valores acima da média: %d\n", acima_media);






    return 0;
}
