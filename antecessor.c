
// Escreva um algoritmo em C que leia um n�mero e exiba na tela: o n�mero lido, seu antecessor e seu sucessor. Use mensagens que deixe claro para o usu�rio o que est� sendo exibido.

#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int n, antecessor, sucessor;

  printf("Informe um nro inteiro: ");
  scanf("%d", &n);

  antecessor = n - 1;
  sucessor = n + 1;

  printf("\n");
  printf("%d (antecessor)\n", antecessor);
  printf("%d (valor)\n", n);
  printf("%d (sucessor)\n", sucessor);

  return(0);
}

