#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    float quadrado, dobro, triplo, metade;

    printf("Programa que lê o número e calcula seu quadrado, dobro, triplo e metade\n");

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    dobro = num * 2;
    triplo = num * 3;
    metade = (float) num / 2;

    printf("Número: %d\n", num);
    printf("Quadrado: %.2f\n", quadrado);
    printf("Dobro: %.2f\n", dobro);
    printf("Triplo: %.2f\n", triplo);
    printf("Metade: %.2f\n", metade);

    return 0;
}
