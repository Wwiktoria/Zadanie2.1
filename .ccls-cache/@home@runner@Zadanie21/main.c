#include <stdio.h>
int main(void)
{
int suma = 0;
int ocena;
int n=0;
for (int i = 0; i < 10; i++)
  { printf("Podaj ocenę: ");
    scanf("%d", &ocena);
    if (ocena>2)
    {n+=1;
    suma += ocena; }
    }
double srednia = suma / (double)n;
printf("Średnia z ocen wynosi: %.2f", srednia);
  }