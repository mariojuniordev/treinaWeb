#include <stdio.h>
#include <stdlib.h>

int main()
{
    float areaTotal, areaConstruida;
    float AreaNaoConstruida = areaTotal - areaConstruida;
    float impostoSobreTerreno = areaConstruida*5 + AreaNaoConstruida*3.8;

    printf("Digite a �rea total do seu terreno: ");
    scanf("%f", areaTotal);
    printf("Digite a �rea Construida do seu terreno: ");
    scanf("%f", areaConstruida);

    printf("O imposto devido sobre o seu terreno � R$ %f", impostoSobreTerreno);

    return 0;
}
