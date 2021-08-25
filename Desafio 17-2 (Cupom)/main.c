#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdLinhas;
    int produtos[qtdLinhas], quantidades[qtdLinhas];

    printf("Digite a quantidade de linhas do cupom: ");
    scanf("%d", &qtdLinhas);

    int i = 0;

    for (int i=0;i < qtdLinhas; i++) {
        printf("Qual o código do produto? ");
        scanf("%d", &produtos[i]);
    }

    for (int i=0;i < qtdLinhas; i++) {
        printf("Qual a quantidade de cada produto (na ordem)?");
        scanf("%d", &quantidades[i]);
    }

    float valorTotal = 0;

    for(int i =0;i<qtdLinhas;i++){

    if(produtos[i]==1){
            valorTotal = valorTotal +(quantidades[i]*3.8);
            printf("Leite Integral x %d - %0.2f\n",quantidades[i],quantidades[i]*3.8);
        }
        if(produtos[i]==2){
            valorTotal = valorTotal+(quantidades[i]*5.98);
            printf("Manteiga x %d - %0.2f\n",quantidades[i],quantidades[i]*5.98);
        }
        if(produtos[i]==3){
            valorTotal = valorTotal+(quantidades[i]*8.25);
            printf("Café 500g x %d - %0.2f\n",quantidades[i],quantidades[i]*8.25);
        }
    }

    printf("Total - %0.2f",valorTotal);

    return 0;
}
