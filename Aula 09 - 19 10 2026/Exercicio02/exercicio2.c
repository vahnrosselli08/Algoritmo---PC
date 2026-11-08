#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");


    int contador=0;
    char dia[4];
    float consumo, media, soma;
    FILE *arquivo = fopen("consumo.txt", "r");

    if(arquivo == NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }

    while(fscanf(arquivo,"%3s %f",dia, &consumo) != EOF){
        soma += consumo;
        contador++;
    }
    media = soma/contador;

    printf("Consumo médio: %.1f\n",media);

    fclose(arquivo);
    return 0;
}
