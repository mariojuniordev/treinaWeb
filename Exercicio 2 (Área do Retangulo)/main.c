#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, h;
    int a = b * h;
    int p = (2*b) + (2*h);

    printf("Digite a base do retângulo: ");
    scanf("%d", b);
    printf("Digite a altura do retângulo: ");
    scanf("%d", h);


    printf("A área do retângulo é %d e o seu perimetro é %d", a, p);

    return 0;
}
