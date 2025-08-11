#include <stdio.h>

int main(){
    printf("BEM VINDO AO JOGO SUPER TRUNFO CIDADES\n\n");

    //CARTA 01
    char estado_carta1;
    char cod_carta1[10];
    char cidade_carta1[30];
    unsigned long int populacao_carta1;
    float area_carta1;
    double pib_carta1;
    int pontos_turisticos_carta1;
    

    //CARTA 02
    char estado_carta2;
    char cod_carta2[10];
    char cidade_carta2[30];
    unsigned long int populacao_carta2;
    float area_carta2;
    double pib_carta2;
    int pontos_turisticos_carta2;

    //CADASTRANDO A 1ª CARTA
    printf("Vamos Cadastrar a 1ª carta\n");

    printf("Digite o Codigo da carta 01 - Ex:. Letra do estado + numero de 01 a 04: ");
    scanf("%s", cod_carta1);

    printf("Digite o Nome da Cidade da carta 01: ");
    scanf(" %[^\n]", cidade_carta1);

    printf("Digite o Estado da carta 01 - Ex:. Letras de A a H (representam um dos oito estados): ");
    scanf(" %c", &estado_carta1);

    printf("Digite a População da carta 01: ");
    scanf("%lu", &populacao_carta1);

    printf("Digite o PIB da carta 01: ");
    scanf("%lf", &pib_carta1);

    printf("Digite a Área da carta 01 (em km²): ");
    scanf("%f", &area_carta1);

    printf("Digite o Numero de Pontos Turisticos da carta 01: ");
    scanf("%d", &pontos_turisticos_carta1);

    //CADASTRANDO A 2ª CARTA
    printf("\nVamos Cadastrar a 2ª carta\n");

    printf("Digite o Codigo da carta 02 - Ex:. Letra do estado + numero de 01 a 04: ");
    scanf("%s", cod_carta2);

    printf("Digite o Nome da Cidade da carta 02: ");
    scanf(" %[^\n]", cidade_carta2);

    printf("Digite o Estado da carta 02 - Ex:. Letras de A a H (representam um dos oito estados): ");
    scanf(" %c", &estado_carta2);

    printf("Digite a População da carta 02: ");
    scanf("%lu", &populacao_carta2);

    printf("Digite o PIB da carta 02: ");
    scanf("%lf", &pib_carta2);

    printf("Digite a Área da carta 02 (em km²): ");
    scanf("%f", &area_carta2);

    printf("Digite o Numero de Pontos Turisticos da carta 02: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Cálculos
    float densidade_pop_carta1 = (float) populacao_carta1 / area_carta1;
    float pib_per_capta_carta1 = pib_carta1 * 1e9 / (float) populacao_carta1;
    float densidade_pop_carta2 = (float) populacao_carta2 / area_carta2;
    float pib_per_capta_carta2 = pib_carta2 * 1e9 / (float) populacao_carta2;
    float super_poder_carta1 = (float) populacao_carta1 + area_carta1 + pib_carta1 + pontos_turisticos_carta1 + pib_per_capta_carta1 + (1 / densidade_pop_carta1);
    float super_poder_carta2 = (float) populacao_carta2 + area_carta2 + pib_carta2 + pontos_turisticos_carta2 + pib_per_capta_carta2 + (1 / densidade_pop_carta2);
    
    // IMPRIMINDO AS INFORMAÇÕES
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("População: %lu habitantes\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta_carta1);
    printf("SUPER PODER: %.2f\n\n", super_poder_carta1);

    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("População: %lu habitantes\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Número de Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capta_carta2);
    printf("SUPER PODER: %.2f\n\n", super_poder_carta2);
    
    // RESULTADO ENTRE AS DUAS CARTAS
    printf("Comparação de Cartas:\n\n");

    printf("POPULAÇÃO\n");
    printf("CARTA 01 - %s (%s): %lu habitantes\n", cidade_carta1, cod_carta1, populacao_carta1);
    printf("CARTA 02 - %s (%s): %lu habitantes\n", cidade_carta2, cod_carta2, populacao_carta2);
    if (populacao_carta1 > populacao_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (populacao_carta1 < populacao_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("ÁREA KM²\n");
    printf("CARTA 01 - %s (%s): %.2f KM²\n", cidade_carta1, cod_carta1, area_carta1);
    printf("CARTA 02 - %s (%s): %.2f KM²\n", cidade_carta2, cod_carta2, area_carta2);
    if (area_carta1 > area_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (area_carta1 < area_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("PIB\n");
    printf("CARTA 01 - %s (%s): R$ %.2f bilhões\n", cidade_carta1, cod_carta1, pib_carta1);
    printf("CARTA 02 - %s (%s): R$ %.2f bilhões\n", cidade_carta2, cod_carta2, pib_carta2);
    if (pib_carta1 > pib_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (pib_carta1 < pib_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("Pontos Turisticos\n");
    printf("CARTA 01 - %s (%s): %d pontos turisticos\n", cidade_carta1, cod_carta1, pontos_turisticos_carta1);
    printf("CARTA 02 - %s (%s): %d pontos turisticos\n", cidade_carta2, cod_carta2, pontos_turisticos_carta2);
    if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (pontos_turisticos_carta1 < pontos_turisticos_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("Densidade Populacional\n");
    printf("CARTA 01 - %s (%s): %.2f km²\n", cidade_carta1, cod_carta1, densidade_pop_carta1);
    printf("CARTA 02 - %s (%s): %.2f km²\n", cidade_carta2, cod_carta2, densidade_pop_carta2);
    if (densidade_pop_carta1 < densidade_pop_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (densidade_pop_carta1 > densidade_pop_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("PIB per Capita\n");
    printf("CARTA 01 - %s (%s): R$ %.2f reais\n", cidade_carta1, cod_carta1, pib_per_capta_carta1);
    printf("CARTA 02 - %s (%s): R$ %.2f reais\n", cidade_carta2, cod_carta2, pib_per_capta_carta2);
    if (pib_per_capta_carta1 > pib_per_capta_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (pib_per_capta_carta1 < pib_per_capta_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }

    printf("SUPER PODER\n");
    printf("CARTA 01 - %s (%s): %.2f\n", cidade_carta1, cod_carta1, super_poder_carta1);
    printf("CARTA 02 - %s (%s): %.2f\n", cidade_carta2, cod_carta2, super_poder_carta2);
    if (super_poder_carta1 > super_poder_carta2) {
        printf("Resultado: CARTA 01 (%s) venceu\n\n", cidade_carta1);
    } else if (super_poder_carta1 < super_poder_carta2) {
        printf("Resultado: CARTA 02 (%s) venceu\n\n", cidade_carta2);
    } else {
        printf("EMPATOU !!\n\n");
    }


    return 0;
}