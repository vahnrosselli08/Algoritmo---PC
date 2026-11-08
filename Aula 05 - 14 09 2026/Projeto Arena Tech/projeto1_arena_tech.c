#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
    setlocale(LC_CTYPE, "");

    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    printf("============== ARENA TECH ==============");
    printf("\nParticipantes: ");
    scanf("%d", &qte_participantes);
    printf("Jogadores por time: ");
    scanf("%d", &qte_jogadores_por_time);
    printf("Computadores disponíveis: ");
    scanf("%d", &qte_computadores);
    printf("Potência (em watts): ");
    scanf("%f", &potencia);
    printf("Duração do evento (em horas): ");
    scanf("%f", &duracao);
    printf("Preço kWh: ");
    scanf("%f", &preco_kwh);
    printf("Preço do kit de alimentação: ");
    scanf("%f", &preco_kit);
    printf("Outros custos: ");
    scanf("%f", &outros_custos);
    printf("Orçamento: ");
    scanf("%f", &orcamento);

    qte_times = ceil(qte_participantes) / qte_jogadores_por_time;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao+outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;
    computadores_faltantes = qte_participantes - qte_computadores;

    if(qte_computadores >= qte_participantes){
        printf("Infraestrutura suficiente\n");
    }
    else {
        printf("infraestrutura insuficiente. Quantidade faltante: %d\n", computadores_faltantes);
    }

    printf("\nConsumo estimado: %.2f kwh", consumo_energia);
    printf("\nClassificação do consumo: ");
    if(consumo_energia > 40){
        printf("Consumo alto");
    }
    else if(consumo_energia >= 20){
        printf("Consumo moderado");
    }
    else{
        printf("Consumo baixo");
    }
    printf("\nCusto da energia: R$%.2f", custo_energia);
    printf("\nCusto da alimentação: R$%.2f", custo_alimentacao);
    printf("\nOutros custos: R$%.2f", outros_custos);
    printf("\nCusto total: R$%.2f", custo_total);
    printf("\nCusto por participantes: R$%.2f", custo_por_participante);
    printf("\n");
    printf("\nOrçamento disponível: R$%.2f", orcamento);
    printf("\nSaldo: R$%.2f", saldo);
    printf("\nSituação do orçamento: ");
    if(custo_total > orcamento){
        printf("Acima do orçamento");
    }
    else if(custo_total <= orcamento && saldo <= (orcamento * 0.05)){
        printf("No limite do orçamento");
    }
    else{
        printf("Dentro do orçamento");
    }

    printf("\n");

    if(qte_computadores < qte_participantes || custo_total > orcamento){
        printf("\nDecisão final: Não recomendado");
    }
    else if(qte_computadores >= qte_participantes && custo_total <= orcamento && consumo_energia > 40){
        printf("\nDecisão final: Aprovado com ressalvas");
    }
    else{
        printf("\nDecisão final: Aprovado");
    }

    if(qte_computadores < qte_participantes || custo_total > orcamento){
        printf("\nMotivo: Falta de computadores / O orçamento não é suficiente");
    }
    else if(consumo_energia > 40){
        printf("\nMotivo: Consumo elevado de energia");
    }
    else{
        printf("Não há problemas em organizar o evento");
    }

    printf("\n=========================================");

    return 0;
}
