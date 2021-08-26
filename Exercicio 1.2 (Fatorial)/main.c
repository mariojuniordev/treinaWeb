#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um número: ");
    scanf("%d", x);

    for (int i = (x-1);i > 0; i--){
        x = x*i;
    }

    printf("O fatorial do número digitado é: %d", x);

    return 0;
}
