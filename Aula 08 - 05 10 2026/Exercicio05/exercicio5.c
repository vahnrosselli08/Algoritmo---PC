#include<stdio.h>
#include<locale.h>
#define LIN 3
#define COL 4


int main()
{
    setlocale(LC_CTYPE, "");
    int i, j, soma_notas, achei;
    int notas[LIN][COL];
    float media, maior_media=0;

    for (i=0; i<LIN; i++){
        for (j=0; j<COL; j++){
            printf("Média do estudante %d: %.2f\n", (i+1), media);
            soma_notas+= notas [i][j];


        }
        media = soma_notas/(float)COL;
        printf("Média do estudante %d: %.2f\n", (i+1), media);
        if (media > maior_media){
            maior_media = media;
            achei = 1;



}









    return 0;
}
}
