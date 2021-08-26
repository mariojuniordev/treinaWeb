#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, qtdDivisores;
    printf("Digite um número: ");
    scanf("%d", x);

    for (int i = 1; i<= x; i++){
        if (x%i == 0){
            qtdDivisores++;
        }
    }

    if (qtdDivisores == 2){
        printf("O número digitado é primo!!!");
    } else {
        printf("O número digitado não é primo!!!");
    }

    return 0;
}
