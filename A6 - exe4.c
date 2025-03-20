#include <stdio.h>

int main()
{
    float raio, diametro, circunferencia, area;
    float PI = 3.14;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    printf("Diâmetro do círculo: %.2f\n", diametro);

    circunferencia = 2 * PI * raio;
    printf("Circunferência do círculo: %.2f\n", circunferencia);

    area = PI * raio * raio;
    printf("Área do círculo: %.2f\n", area);

    return 0;
}