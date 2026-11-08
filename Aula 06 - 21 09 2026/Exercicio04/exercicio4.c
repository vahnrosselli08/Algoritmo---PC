#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    int conta=12345, senha=123;
    int user, pass;
    int tentativas=3;
    while (1){
        printf("Digite sua conta: ");
        scanf("%d", &conta);
        printf("Digite sua senha: ");
        scanf("%d", &num);
        if (user == conta && pass == senha){
            printf("Logado.")
            break;
        }

    }

    return 0;
}
