#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, h;
    int a = b * h;
    int p = (2*b) + (2*h);

    printf("Digite a base do ret�ngulo: ");
    scanf("%d", b);
    printf("Digite a altura do ret�ngulo: ");
    scanf("%d", h);


    printf("A �rea do ret�ngulo � %d e o seu perimetro � %d", a, p);

    return 0;
}
