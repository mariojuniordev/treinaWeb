#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, qtdDivisores;
    printf("Digite um n�mero: ");
    scanf("%d", x);

    for (int i = 1; i<= x; i++){
        if (x%i == 0){
            qtdDivisores++;
        }
    }

    if (qtdDivisores == 2){
        printf("O n�mero digitado � primo!!!");
    } else {
        printf("O n�mero digitado n�o � primo!!!");
    }

    return 0;
}
