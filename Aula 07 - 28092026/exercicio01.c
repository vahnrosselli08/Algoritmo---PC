#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int valores;
    int positivos = 0;
    int negativos = 0;
    float numero;
    float maior;

    printf("Digite a quantidade de valores a serem analisados: ");
    scanf("%d", &valores);

    for (int i = 1; i <= valores; i++)
    {
        printf("Digite o %dº numero: ", i);
        scanf("%f", &numero);

        if (i == 1)
        {
            maior = numero;
        }
        else if (numero > maior)
        {
            maior = numero;
        }

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero < 0)
        {
            negativos++;
        }
    }
    printf("\nRESULTADOS\n");
    printf("Quantidade de valores positivos: %d\n", positivos);
    printf("Quantidade de valores negativos: %d\n", negativos);
    printf("Maior valor informado: %.2f\n", maior);

    return 0;
}
