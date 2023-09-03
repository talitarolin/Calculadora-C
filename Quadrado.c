/*Escreva um algoritmo em C que leia um número e imprima o seu quadrado no formato “Quadrado: valor”*/

#include <stdio.h> //Aqui estou informando a bibliotecas necessarias
#include <locale.h>

int main(void //Aqui estou començando com int pra informar que vou lidar com numeros inteiros
{
    setlocale(LC_ALL, "Portuguese"); // aqui estou informando que  linguagem que vai aparecer pro usuario

    int n;// aqui estou declarando o numero
    printf("Informe um número inteiro: ");// aqui estou imprimindo a mensagem pra que o usuario insira o numero
    scanf("%d", &n);//aqui é pra salvar o que o usuario digitou

    n = n * n; //o calculo de quadrado

    printf("O quadrado do número é: %d\n", n); // aqui estou imprimindo o resultado para o usuario

    return 0; //aqui é pra o codigo retrnanar zero#include <stdio.h> // Incluindo a biblioteca necessária para entrada/saída padrão
#include <locale.h>

int main(void) // Função principal do programa, onde lidaremos com números inteiros
{
    setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para que a saída seja exibida em português

    int n; // Declarando uma variável para armazenar o número
    printf("Informe um número inteiro: "); // Solicitando ao usuário que insira um número inteiro
    scanf("%d", &n); // Lendo o número digitado pelo usuário e armazenando na variável

    n = n * n; // Calculando o quadrado do número

    printf("O quadrado do número é: %d\n", n); // Exibindo o resultado do cálculo para o usuário

    return 0; // Indicando que o programa foi executado com sucesso
}

}
