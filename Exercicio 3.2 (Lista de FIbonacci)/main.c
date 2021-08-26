#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroAtual = 1,i = 0;
    int qtdTermos = 0;

    printf("Digite a quantidade de termos da sequência: ");
    scanf("%d", qtdTermos);

    printf("Sequência Gerada: \n");
    int numeroAnterior = 0;

    int temporario = 0;

    for (i = 1; i < qtdTermos; i++){
        temporario = numeroAtual;
        numeroAtual = numeroAtual + numeroAnterior;
        numeroAnterior = temporario;
        printf("%d ", numeroAtual);
    }

    return 0;
}
