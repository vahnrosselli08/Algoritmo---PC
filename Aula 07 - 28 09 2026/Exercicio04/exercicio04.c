#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");
    char municipio[50];
    float temperatura;
    float soma_temperaturas = 0;
    int municipios_frios = 0;
    printf("MONITORAMENTO CLIMÁTICO REGIONAL\n\n");

    for (int i = 1; i <= 5; i++) {
        printf("Digite o nome do %dº município (sem espaços): ", i);
        scanf("%s", municipio);

        printf("Digite a temperatura média de %s (°C): ", municipio);
        scanf("%f", &temperatura);

        soma_temperaturas += temperatura;

        if (temperatura < 10.0) {
            municipios_frios++;
        }

        printf("\n");
    }

    float media_regiao = soma_temperaturas / 5.0;

    printf("RELATÓRIO FINAL DA REGIÃO\n");
    printf("Temperatura média da região: %.1f °C\n", media_regiao);
    printf("Quantidade de municípios com temperatura < 10 °C: %d\n", municipios_frios);

    return 0;
}
