#include <stdio.h>

//Declaração das variáveis de imput
int main(){
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    int ponto_turistico1;
    float area1;
    float PIB1;

    char estado2;
    char codigo2[5];
    char cidade2[20];
    unsigned long int populacao2;
    int ponto_turistico2;
    float area2;
    float PIB2;
    
//Configuração dos dados de entradas e saídas carta 1
    printf("\n *** Cadastro da Carta 1: ***\n");
    printf("Digite a letra do estado(A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o código\n");
    scanf("%s", &codigo1);
    printf("Digite a cidade: \n");
    scanf(" %s[^\n]", cidade1);
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite a área: \n");
    scanf("%f", &area1);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico1);
    float densidade1 = populacao1/area1;
    float percapta1 = (PIB1*1000000000)/populacao1;
    float super = populacao1 + area1 + PIB1 + ponto_turistico1 + percapta1 + (1 / densidade1);

//Visualização dos dados Carta 1
    printf("\n *** Carta 1: ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Área: %.2f Km²\n", area1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
    printf("PIB Percapta: R$ %.2f reais \n", percapta1);
    printf("\n");

    //Configuração dos dados de entradas e saídas Carta 2
    printf("\n *** Cadastro da Carta 2: ***\n");
    printf("Digite a letra do estado(A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o código\n");
    scanf("%s", &codigo2 );
    printf("Digite a cidade: \n");
    scanf(" %s[^\n]", cidade2);
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("Digite a área: \n");
    scanf("%f", &area2);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);
    float densidade2 = populacao2/area2;
    float percapta2 = (PIB2*1000000000)/ponto_turistico2;
    float super2 = populacao2 + area2 + PIB2 + ponto_turistico2 + percapta2 + (1 / densidade2);

//Visualização dos dados carta 2
    printf("\n *** Carta 2: ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Área: %.2f Km²\n", area2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Percapta: R$ %.2f reais\n",percapta2);

    // Resultado da carta vencedora
    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponto_turistico1 > ponto_turistico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapta1 > percapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super > super2);

    printf("\n");
    return 0;

}