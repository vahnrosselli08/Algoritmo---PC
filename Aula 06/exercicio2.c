#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");
    int i;
    float nota, soma=0, media;
    float maior_nota = 0;

    for(i=0; i<5; i++){
        printf("Digite a nota do %dº aluno: ", (i+1));
        scanf("%f", &nota);
        soma += nota;

    if(nota > maior_nota){
        maior_nota = nota;
}

    }
    media = soma/i;
    printf("Média da turma = %.2f", media);
    printf("\nMaior nota %.2f", maior_nota);
    return 0;


}
