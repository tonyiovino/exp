#include <stdio.h>

int main()
{
  int n;
  int fattoriale = 1;
  int i;

  printf("Inserisci un numero: ");
  scanf("%d", &n);

  i = n;

  for (i = 1; i <= n; i += 1) {
    fattoriale *= i;
    printf("%d! = %d\n", i, fattoriale);
  }

  return 0;
}