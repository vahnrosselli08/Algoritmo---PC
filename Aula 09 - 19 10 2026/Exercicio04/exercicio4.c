#include <stdio.h>

int main() {
    int contador = 0;
    int aprovados = 0;
    char rgm[20];
    float nota, media = 0.0, soma = 0.0, maior_nota = -1.0;


    FILE *arquivo = fopen("notas.txt", "r");

    if (arquivo == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }


    while (fscanf(arquivo, "%s %f", rgm, &nota) == 2) {
        soma += nota;
        contador++;

        if (nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota >= 6.0) {
            aprovados++;
        }
    }

    fclose(arquivo);

    if (contador > 0) {
        media = soma / contador;
    }


    printf("Estudantes: %d\n\n", contador);
    printf("Media da turma: %.2f\n\n", media);
    printf("Maior nota: %.2f\n\n", maior_nota);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
