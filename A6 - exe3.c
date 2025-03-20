#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite três valores inteiros (-1 para sair): ");
    scanf("%d", &a);

    while (a != -1)
    {
        scanf("%d %d", &b, &c);

        int hip, cat1, cat2;

        if (a > b && a > c)
        {
            hip = a;
            cat1 = b;
            cat2 = c;
        }
        else if (b > a && b > c)
        {
            hip = b;
            cat1 = a;
            cat2 = c;
        }
        else
        {
            hip = c;
            cat1 = a;
            cat2 = b;
        }

        if (hip * hip == cat1 * cat1 + cat2 * cat2)
        {
            printf("Os valores formam um triângulo retângulo!\n");
        }
        else
        {
            printf("Os valores não formam um triângulo retângulo.\n");
        }

        printf("Digite três valores inteiros (-1 para sair): ");
        scanf("%d", &a);
    }

    return 0;
}