#include <stdio.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese");
  int num;
  float tresPorCento, trintaPorCento, centoTrintaPorCento; 

  printf("Programa que efetua o cálculo nos valores correspondentes a 3%%, 30%% e 130%% do valor informado\n");

  printf("Insira um número inteiro:\n");
  scanf("%d", &num); 

  tresPorCento = num * 0.03;
  trintaPorCento = num * 0.30; 
  centoTrintaPorCento = num * 1.30;

  printf("valor original: %d\n", num);
  printf("3%% do valor: %.2f\n", tresPorCento);
  printf("30%% do valor: %.2f\n", trintaPorCento);
  printf("130%% do valor: %.2f\n", centoTrintaPorCento);

  return 0;
}
