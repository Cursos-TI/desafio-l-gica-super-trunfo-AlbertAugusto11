#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Carta 1
    char estado1, codigo1[10], cidade1[30] = {'\0'};
    unsigned long int populacao1;
    float area1, densidade1, pib_per_capita1, super_poder1;
    double pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2, codigo2[10], cidade2[30] = {'\0'};
    unsigned long int populacao2;
    float area2, densidade2, pib_per_capita2, super_poder2;
    double pib2;
    int pontos_turisticos2;

    printf("BEM VINDO AO JOGO SUPER TRUNFO CIDADES\n");

    while (1)
    {
        int opcao;
        printf("\nMENU DO JOGO:\n");
        printf("1 - Regras do Jogo.\n");
        printf("2 - Cadastrar cartas.\n");
        printf("3 - Imprimir informações das Cartas.\n");
        printf("4 - Comparar Atributos das Cartas.\n");
        printf("0 - Sair do Jogo.\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nREGRAS DO JOGO:\n");
            printf("Cadastre duas cartas com atributos das cidades.\n");
            printf("Compare os atributos e veja qual cidade vence.\n");
            break;

        case 2:
            // Cadastro carta 1
            printf("\nCadastro da Carta 1:\n");
            printf("Código: ");
            scanf("%s", codigo1);
            printf("Cidade: ");
            scanf(" %[^\n]", cidade1);
            printf("Estado (A-H): ");
            scanf(" %c", &estado1);
            printf("População: ");
            scanf("%lu", &populacao1);
            printf("PIB (em bilhões): ");
            scanf("%lf", &pib1);
            printf("Área (em km²): ");
            scanf("%f", &area1);
            printf("Pontos turísticos: ");
            scanf("%d", &pontos_turisticos1);

            // Cadastro carta 2
            printf("\nCadastro da Carta 2:\n");
            printf("Código: ");
            scanf("%s", codigo2);
            printf("Cidade: ");
            scanf(" %[^\n]", cidade2);
            printf("Estado (A-H): ");
            scanf(" %c", &estado2);
            printf("População: ");
            scanf("%lu", &populacao2);
            printf("PIB (em bilhões): ");
            scanf("%lf", &pib2);
            printf("Área (em km²): ");
            scanf("%f", &area2);
            printf("Pontos turísticos: ");
            scanf("%d", &pontos_turisticos2);

            // Cálculos
            densidade1 = populacao1 / area1;
            pib_per_capita1 = pib1 * 1e9 / populacao1;
            super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);

            densidade2 = populacao2 / area2;
            pib_per_capita2 = pib2 * 1e9 / populacao2;
            super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);
            break;

        case 3:
            // IMPRIMINDO INFORMAÇÕES DAS CARTAS
            if (cidade1[0] == '\0' || cidade2[0] == '\0')
            {
                printf("\nPRIMEIRO CADASTRE AS CARTAS!\n");
                break;
            }

            printf("\nCARTA 1:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %lu\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões\n", pib1);
            printf("Pontos Turísticos: %d\n", pontos_turisticos1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
            printf("SUPER PODER: %.2f\n", super_poder1);

            printf("\nCARTA 2:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões\n", pib2);
            printf("Pontos Turísticos: %d\n", pontos_turisticos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
            printf("SUPER PODER: %.2f\n", super_poder2);
            break;

        case 4:
            // Verifica se as cartas foram cadastradas
            if (super_poder1 == 0 || super_poder2 == 0)
            {
                printf("\nPRIMEIRO CADASTRE AS CARTAS!\n");
                break;
            }

            int atributo1_jogador1, atributo2_jogador1, atributo1_jogador2, atributo2_jogador2;

            printf("\nJOGADORES - ESCOLHAM SEUS ATRIBUTOS.\n");
            printf("1 - População\n");
            printf("2 - Área em km²\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("6 - PIB per Capita\n");
            printf("7 - SUPER PODER\n");

            // Jogador 1
            printf("Jogador 1 escolha seu 1º atributo: ");
            scanf("%d", &atributo1_jogador1);

            while (1)
            {
                printf("Jogador 1 escolha seu 2º atributo: ");
                scanf("%d", &atributo2_jogador1);
                if (atributo2_jogador1 == atributo1_jogador1)
                {
                    printf("\nAtributo já escolhido. Escolha outro.\n");
                }
                else if (atributo2_jogador1 >= 1 && atributo2_jogador1 <= 7)
                {
                    break;
                }
                else
                {
                    printf("Digite um valor válido entre 1 e 7!\n");
                }
            }

            // Jogador 2
            printf("Jogador 2 escolha seu 1º atributo: ");
            scanf("%d", &atributo1_jogador2);

            while (1)
            {
                printf("Jogador 2 escolha seu 2º atributo: ");
                scanf("%d", &atributo2_jogador2);
                if (atributo2_jogador2 == atributo1_jogador2)
                {
                    printf("\nAtributo já escolhido. Escolha outro.\n");
                }
                else if (atributo2_jogador2 >= 1 && atributo2_jogador2 <= 7)
                {
                    break;
                }
                else
                {
                    printf("Digite um valor válido entre 1 e 7!\n");
                }
            }

            // Calcula os valores dos jogadores
            float valor_jogador1 = 0, valor_jogador2 = 0;

            for (int i = 1; i <= 7; i++)
            {
                if (atributo1_jogador1 == i || atributo2_jogador1 == i)
                {
                    switch (i)
                    {
                    case 1:
                        valor_jogador1 += populacao1;
                        break;
                    case 2:
                        valor_jogador1 += area1;
                        break;
                    case 3:
                        valor_jogador1 += pib1;
                        break;
                    case 4:
                        valor_jogador1 += pontos_turisticos1;
                        break;
                    case 5:
                        valor_jogador1 += (1 / densidade1);
                        break;
                    case 6:
                        valor_jogador1 += pib_per_capita1;
                        break;
                    case 7:
                        valor_jogador1 += super_poder1;
                        break;
                    }
                }

                if (atributo1_jogador2 == i || atributo2_jogador2 == i)
                {
                    switch (i)
                    {
                    case 1:
                        valor_jogador2 += populacao2;
                        break;
                    case 2:
                        valor_jogador2 += area2;
                        break;
                    case 3:
                        valor_jogador2 += pib2;
                        break;
                    case 4:
                        valor_jogador2 += pontos_turisticos2;
                        break;
                    case 5:
                        valor_jogador2 += (1 / densidade2);
                        break;
                    case 6:
                        valor_jogador2 += pib_per_capita2;
                        break;
                    case 7:
                        valor_jogador2 += super_poder2;
                        break;
                    }
                }
            }

            // Exibe os resultados
            printf("\nResultado da comparação:\n\n");

            if (valor_jogador1 > valor_jogador2)
            {
                printf("Jogador 1 venceu!\n");
                printf("Cidade: %s\n", cidade1);
                printf("Valor: %.2f\n\n", valor_jogador1);
                printf("Jogador 1 perdeu!\n");
                printf("Cidade: %s\n", cidade2);
                printf("Valor: %.2f\n", valor_jogador2);
            }
            else if (valor_jogador2 > valor_jogador1)
            {
                printf("Jogador 2 venceu!\n");
                printf("Cidade: %s\n", cidade2);
                printf("Valor: %.2f\n\n", valor_jogador2);
                printf("Jogador 1 perdeu!\n");
                printf("Cidade: %s\n", cidade1);
                printf("Valor: %.2f\n", valor_jogador1);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 0:
            printf("Encerrando o jogo...\n");
            exit(0);

        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}