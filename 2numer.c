#include <stdio.h> // Incluindo a biblioteca necess�ria para entrada/sa�da padr�o
#include <locale.h>

int main(void) // Fun��o principal do programa
{
    setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para que a sa�da seja exibida em portugu�s

    int n1, n2; // Declarando vari�veis para armazenar os n�meros
    printf("Informe um n�mero inteiro: "); // Solicitando ao usu�rio que insira um n�mero inteiro
    scanf("%d", &n1); // Lendo o n�mero digitado pelo usu�rio e armazenando na vari�vel

    printf("Informe outro n�mero inteiro: "); // Solicitando ao usu�rio que insira outro n�mero inteiro
    scanf("%d", &n2); // Lendo o segundo n�mero digitado pelo usu�rio e armazenando na vari�vel

    int soma = n1 + n2; // Calculando a soma dos n�meros
    int produto = n1 * n2; // Calculando o produto dos n�meros
    int diferenca = n1 - n2; // Calculando a diferen�a entre os n�meros

    printf("Soma: %d\n", soma); // Exibindo a soma para o usu�rio
    printf("Produto: %d\n", produto); // Exibindo o produto para o usu�rio
    printf("Diferen�a: %d\n", diferenca); // Exibindo a diferen�a para o usu�rio

    return 0; // Indicando que o programa foi executado com sucesso
}
