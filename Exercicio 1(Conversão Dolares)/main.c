#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDolares = 0;
    printf("Digite o valor que você tem em dólares: ");
    scanf("%f", valorDolares);

    float valorReais = valorDolares*3;

    printf("O valor que você tem em dólares é equivalente a R$ %f", valorReais );

    return 0;
}
