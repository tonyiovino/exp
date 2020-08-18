#include <stdio.h>
#include <math.h>

int main()
{
  int fattoriale = 1;
  int count;

  double x;
  double e = 1.;
  double x_elevato = 0.;

  printf("X vale: ");
  scanf("%lf", &x);

  x_elevato = x;
  for (count = 1; count < 10; count++){
    fattoriale *= count;
    e = e + x_elevato/(double)fattoriale;
    x_elevato *= x;
  }
  printf("\nCostante e (Calcolata): %f\n", e);

  printf("\nCostante e (Funxione): %f\n", exp(x));

  return 0;
}