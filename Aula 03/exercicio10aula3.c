#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float veloc_inic, angulo, alcan_hori, rad;
    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &veloc_inic);
    printf(" Qual o ângulo de lançamento em graus: ");
    scanf("%f", &angulo);

    rad = (angulo*3.14)/180;
    alcan_hori = pow(veloc_inic,2)*sin(2*rad)/9.8;
    printf("O alcance horizontal estimado é %.2f metros", alcan_hori);
    return 0;

}
