#include <stdio.h>

int main()
{
  float nota;
  float total = 0.0;
  int contador = 1;
  int fim = 3;

  while (contador <= fim)
  {
    printf("Insira a nota %d: ", contador);
    scanf("%f", &nota);

    total = total + nota;

    contador = contador + 1;
  }

  float media = total / fim;
  printf("A média das notas é: %.2f", media);

  return 0;
}