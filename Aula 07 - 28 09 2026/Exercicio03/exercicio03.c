#include <stdio.h>

int main() {
    float nota;
    int aprovados = 0;

    printf("CONTROLE DE NOTAS DA TURMA\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            aprovados++;
        }
    }

    printf("\n-----------------------------------\n");
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
