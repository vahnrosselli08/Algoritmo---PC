#include<stdio.h>
#include<locale.h>
#define TAM 5

int main()
{
    setlocale(LC_CTYPE, "");

   int i, acima_media=0, achei_maior;
   float salarios [TAM];
   float soma=0, media, maior_salario;

   for (i=0; i<TAM; i++) {
        printf("Digite o salario do funcionário %d: ", (i+1));
        scanf("%f", &salarios [i]);
        soma += salarios[i];
   }



    media = soma/TAM;
    maior_salario = salarios[0];
    achei_maior = 1;
    for (i=0; i<TAM; i++){
        if (salarios[i] > media)
            acima_media++;
        if (salarios[i] > maior_salario){
            maior_salario = salarios[i];
            achei_maior = i+1;
    }
    }


    printf("Média dos salários: R$ %.2f\n", media);
    printf("Quantidade de salários acima da média: %d\n", acima_media);
    printf("Maior salário funcionário %d : R$ %.2f\n", achei_maior, maior_salario);





    return 0;
}
