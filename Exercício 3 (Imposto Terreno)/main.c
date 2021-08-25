#include <stdio.h>
#include <stdlib.h>

int main()
{
    float areaTotal, areaConstruida;
    float AreaNaoConstruida = areaTotal - areaConstruida;
    float impostoSobreTerreno = areaConstruida*5 + AreaNaoConstruida*3.8;

    printf("Digite a área total do seu terreno: ");
    scanf("%f", areaTotal);
    printf("Digite a área Construida do seu terreno: ");
    scanf("%f", areaConstruida);

    printf("O imposto devido sobre o seu terreno é R$ %f", impostoSobreTerreno);

    return 0;
}
