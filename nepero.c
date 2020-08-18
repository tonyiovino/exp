#include <stdio.h>

int main()
{
  int fattoriale = 1;
  int num = 10;
  int count;

  double e = 1;
  double first_e;
  double differenza = 1;

  for (count = 1; count <= num; count++){
    fattoriale *= count;
    e = e + 1./(double)fattoriale;
  }
  printf("Costante e: %f\n\n", e);

  fattoriale = 1;
  e = 1.;

  for (count = 1; differenza > 0.001; count++){
    first_e = e;
    fattoriale *= count;
    e = e + 1./(double)fattoriale;
    differenza = e - first_e;
  }
  printf("Seconda volta e: %f\n", e);

  return 0;
}