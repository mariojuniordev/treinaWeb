#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDolares = 0;
    printf("Digite o valor que voc� tem em d�lares: ");
    scanf("%f", valorDolares);

    float valorReais = valorDolares*3;

    printf("O valor que voc� tem em d�lares � equivalente a R$ %f", valorReais );

    return 0;
}
