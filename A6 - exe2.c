#include <stdio.h>

int main()
{

    float nota, soma = 0;
    int contador = 0;
    int continuar = 1;
    printf("Digite as notas (digite -5 para terminar):\n");

    while (continuar)
    {
        printf("Nota %d: ", contador + 1);
        scanf("%f", &nota);

        if (nota == -5)
        {
            continuar = 0;
        }
        else
        {

            soma += nota;
            contador++;
        }
    }

    float media = soma / contador;
    printf("A media das %d notas é: %.2f\n", contador, media);

    return 0;
}