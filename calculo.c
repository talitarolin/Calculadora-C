//Escreva um algoritmo em C que peça ao usuário que digite 2 números, obtenha esses números e exiba a soma, o produto e a diferença.

#include <stdio.h>
#include <locale>

int main(void)
{
  setlocale(LC_ALL,"Portuguese")
  
  int num1, num2, soma, produto, diferenca;

  printf("Programa que efetua  a soma, o produto e a diferença de dois números inteiros\n\n");

  printf("Digite dois número inteiros:\n");
  scanf("%d %d", &num1, &num2);

  soma = num1 + num2;

  produto = num1 * num2;

  diferenca = num1 - num2;

  printf("A soma de %d e %d é = %d\n", num1, num2, soma);
  printf("O produto de %d e %d é = %d\n", num1, num2, produto);
  printf("A diferença de %d e %d é = %d\n", num1, num2, diferença);
  
return 0;
}
  

