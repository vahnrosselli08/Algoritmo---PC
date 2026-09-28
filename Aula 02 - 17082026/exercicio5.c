#include<stdio.h>
#include<locale.h>
int main()
{

    setlocale(LC_CTYPE,"");
    float primeira_nota, segunda_nota, media;
    printf("Insira a primeira nota: ");
    scanf("%f", &primeira_nota);
    printf("Insira a segunda nota: ");
    scanf("%f", &segunda_nota);
    media = (primeira_nota+segunda_nota)/2;
    printf("Média aritmética: %.2f", media);
    return 0;

}
