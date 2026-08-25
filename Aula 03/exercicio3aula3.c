#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int n1, n2, soma, sub, multi;
    printf("Digite seu primeiro número: ");
    scanf("%d", &n1);
    printf("Digite seu segundo número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    printf("Soma: %d\nSubtração: %d\nMultiplicação: %d", soma, sub, multi);
    return 0;


}
