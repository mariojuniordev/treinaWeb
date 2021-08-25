#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdAportes;
    float valorAporte[qtdAportes];
    float porcentagemJuros;

    printf("Qual a quantidade de aportes que você realizou? ");
    scanf("%d", &qtdAportes);

    int i = 0;

    for (int i = 0; i < qtdAportes; i++){
        printf("Digite o valor do %d º aporte", i + 1);
        scanf("%f", &valorAporte[i]);
    }

    printf("Digite a porcentagem de juros: ");
    scanf("%f", &porcentagemJuros);

   float valorAnterior = 0;

    for(int i = 0; i < qtdAportes; i++) {
        valorAnterior = valorAnterior + (valorAnterior * porcentagemJuros)/100 + valorAporte[i];
    }

    printf("%.2f", valorAnterior);

    return 0;
}
