#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um n�mero: ");
    scanf("%d", x);

    for (int i = (x-1);i > 0; i--){
        x = x*i;
    }

    printf("O fatorial do n�mero digitado �: %d", x);

    return 0;
}
