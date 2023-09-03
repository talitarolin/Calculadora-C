#include <stdio.h> // Incluindo a biblioteca necessária para entrada/saída padrão
#include <locale.h>

int main(void) // Função principal do programa
{
    setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para que a saída seja exibida em português

    int n1, n2; // Declarando variáveis para armazenar os números
    printf("Informe um número inteiro: "); // Solicitando ao usuário que insira um número inteiro
    scanf("%d", &n1); // Lendo o número digitado pelo usuário e armazenando na variável

    printf("Informe outro número inteiro: "); // Solicitando ao usuário que insira outro número inteiro
    scanf("%d", &n2); // Lendo o segundo número digitado pelo usuário e armazenando na variável

    int soma = n1 + n2; // Calculando a soma dos números
    int produto = n1 * n2; // Calculando o produto dos números
    int diferenca = n1 - n2; // Calculando a diferença entre os números

    printf("Soma: %d\n", soma); // Exibindo a soma para o usuário
    printf("Produto: %d\n", produto); // Exibindo o produto para o usuário
    printf("Diferença: %d\n", diferenca); // Exibindo a diferença para o usuário

    return 0; // Indicando que o programa foi executado com sucesso
}
