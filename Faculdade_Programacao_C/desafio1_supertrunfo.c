#include <stdio.h>

int main() {
    
    // Primeira Carta
    char State1[3];
    char CardCode1[5];
    char NameCity1[50];
    int Population1;
    float Area1;
    float Pib1;
    int TuristicPoint1;
    float DensidadePop1;
    float PIBperCap1;
    float SuperP1;
    float InversoDensidade1;

    // Segunda Carta
    char State2[3];
    char CardCode2[5];
    char NameCity2[50];
    int Population2;
    float Area2;
    float Pib2;
    int TuristicPoint2;
    float DensidadePop2;
    float PIBperCap2;
    float SuperP2;
    float InversoDensidade2;
    
    //Jogo do Super Trunfo
    printf("Super Trunfo\n");
    printf("Primeira Carta\n");

    //First Input data

    printf("Estado: \n");
    scanf("%s", &State1);

    printf("Codigo da carta: \n");
    scanf("%s", &CardCode1);

    printf("Nome da cidade: \n");
    scanf("%s", &NameCity1);

    printf("Populacao: \n");
    scanf("%d", &Population1);

    printf("Area: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &Pib1);

    printf("Pontos turisticos: \n");
    scanf("%d", &TuristicPoint1); 

    //calculations card 1

    // Populacao: 12325000
    // Area: 1521.11
    // PIB: 699280000000.00
    // Pontos Turísticos: 50
    // PIB per capita: 56736.71
    // Densidade Populacional: 8102.64
    // Super Power: 699292385280.00

    DensidadePop1 = (float) Population1 / Area1;
    PIBperCap1 =  Pib1 / (float) Population1;
    InversoDensidade1 = 1.0 / DensidadePop1;

    long double resultCalc1 = (float) Population1 + Area1 + (float) TuristicPoint1 + Pib1 + PIBperCap1 + InversoDensidade1;

    SuperP1 = (float) resultCalc1;

    // Segunda Carta

    printf("Segunda Carta\n");
    
    printf("Estado: \n");
    scanf("%s", &State2);

    printf("Codigo da carta: \n");
    scanf("%s", &CardCode2);

    printf("Nome da cidade: \n");
    scanf("%s", &NameCity2);

    printf("Populacao: \n");
    scanf("%d", &Population2);

    printf("Area: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &Pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &TuristicPoint2);

    // calculations card 2

    // Populacao: 6748000
    // Area: 1200.25
    // PIB: 300500000000.00
    // Pontos Turísticos: 30
    // PIB per capita: 44531.71
    // Densidade Populacional: 5622.16
    // Super Poder: 300506775552.00

    DensidadePop2 = (float) Population2 / Area2;
    PIBperCap2 = Pib2 / (float) Population2;
    InversoDensidade1 = 1.0 / DensidadePop2;

    long double resultCalc2 = (float) Population2 + Area2 + (float) TuristicPoint2 + Pib2 + PIBperCap2 + InversoDensidade2;

    SuperP2 = (float) resultCalc2;

    // comparing population density

    int rPopDensity = 1 + (1 != DensidadePop1 < DensidadePop2);

    // Showing the data
    
    printf("Os dados foram inseridos com sucesso!\n");

    printf("Primeira Carta\n");

    printf("Estado: %c\n", State1);
    printf("Codigo da carta: %s\n", CardCode1);
    printf("Nome da cidade: %s\n", NameCity1);
    printf("Populacao: %d\n", Population1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Pontos turisticos: %d\n", TuristicPoint1);
    printf("Densidade Populacional: %.2f\n", DensidadePop1);
    printf("PIB per Capita: %.2f\n", PIBperCap1); 
    printf("O super poder da carta 1 é: %.2f\n", SuperP1);

    printf("Segunda Carta\n");

    printf("Estado: %c\n", State2);
    printf("Codigo da carta: %s\n", CardCode2);
    printf("Nome da cidade: %s\n", NameCity2);
    printf("Populacao: %d\n", Population2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Pontos turisticos: %d\n", TuristicPoint2);
    printf("Densidade Populacional: %.2f\n", DensidadePop2);
    printf("PIB per Capita: %.2f\n", PIBperCap2);
    printf("O super poder da carta 1 é: %.2f\n", SuperP2);

     // Comparing Cards

    printf("---- Batalha de Cartas ----\n");
    printf("População: Card %d venceu!\n", Population1 > Population2);
    printf("Area: Card %d venceu!\n", Area1 > Area2);
    printf("PIB: Card %d venceu!\n", Pib1 > Pib2);
    printf("Pontos de turísticos: Card %d venceu!\n", TuristicPoint1 > TuristicPoint2);
    printf("Densidade Populacional: Card %d venceu!\n", rPopDensity);
    printf("PIB per Capita: Card %d venceu!\n", PIBperCap1 > PIBperCap2);
    printf("Super Poder: Card %d venceu!\n", SuperP1 > SuperP2);
    printf("---- Fim ----\n");
    
    printf("Jogo Finalizado!\n");

    return 0;
}