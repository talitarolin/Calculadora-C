/*Escreva um algoritmo em C que leia um n�mero e imprima o seu quadrado no formato �Quadrado: valor�*/

#include <stdio.h> //Aqui estou informando a bibliotecas necessarias
#include <locale.h>

int main(void //Aqui estou comen�ando com int pra informar que vou lidar com numeros inteiros
{
    setlocale(LC_ALL, "Portuguese"); // aqui estou informando que  linguagem que vai aparecer pro usuario

    int n;// aqui estou declarando o numero
    printf("Informe um n�mero inteiro: ");// aqui estou imprimindo a mensagem pra que o usuario insira o numero
    scanf("%d", &n);//aqui � pra salvar o que o usuario digitou

    n = n * n; //o calculo de quadrado

    printf("O quadrado do n�mero �: %d\n", n); // aqui estou imprimindo o resultado para o usuario

    return 0; //aqui � pra o codigo retrnanar zero#include <stdio.h> // Incluindo a biblioteca necess�ria para entrada/sa�da padr�o
#include <locale.h>

int main(void) // Fun��o principal do programa, onde lidaremos com n�meros inteiros
{
    setlocale(LC_ALL, "Portuguese"); // Definindo o idioma para que a sa�da seja exibida em portugu�s

    int n; // Declarando uma vari�vel para armazenar o n�mero
    printf("Informe um n�mero inteiro: "); // Solicitando ao usu�rio que insira um n�mero inteiro
    scanf("%d", &n); // Lendo o n�mero digitado pelo usu�rio e armazenando na vari�vel

    n = n * n; // Calculando o quadrado do n�mero

    printf("O quadrado do n�mero �: %d\n", n); // Exibindo o resultado do c�lculo para o usu�rio

    return 0; // Indicando que o programa foi executado com sucesso
}

}
