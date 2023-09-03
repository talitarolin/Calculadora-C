#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    printf("Programa que lê a idade, mostra ela em meses, lê a idade de um parente e calcula a proporção\n");

    int num;
    printf("Insira a sua idade: ");
    scanf("%d", &num);

    int meses = num * 12;
    printf("Sua idade em meses é %d (meses)\n", meses);

    int idade_parente;
    printf("Qual é a idade de um parente seu (ex: pai, mãe, etc)? \n");
    scanf("%d", &idade_parente);

    float proporcao = (float) num / idade_parente;
    printf("Sua idade é %.6f vezes a do seu parente\n", proporcao);

    return 0;
}
