#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    int i;
    float preco, total_compra=0;
    double cpf;

    printf("Digite o CPF do cliente: ");
    scanf("%lf", &cpf);

    for (i=1; i<=5; i++){
        printf("Digite o preço do %dº produto: ", i);
        scanf("%f", &preco);
        total_compra += preco;
    }

        printf("\nCPF: %0lf", cpf);
        printf("\nTotal da compra R$%.2f\n", total_compra);


    return 0;

}



