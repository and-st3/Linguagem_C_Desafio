#include <stdio.h>

int main() {
    
    // Primeira Carta
    char State1;
    char CardCode1[4];
    char NameCity1[50];
    int Population1;
    float Area1;
    float Pib1;
    int TuristicPoint1;

    // Segunda Carta
    char State2;
    char CardCode2[4];
    char NameCity2[50];
    int Population2;
    float Area2;
    float Pib2;
    int TuristicPoint2;
    
    //Jogo do Super Trunfo
    printf("Super Trunfo\n");
    printf("Primeira Carta\n");

    printf("Estado: \n");
    scanf("%c", &State1);

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

    float DensidadePop1 = (double) Population1 / (double) Area1;
    float PIBperCap1 = (double) Population1 / (double) Pib1 ;

    // Segunda Carta

    printf("Segunda Carta\n");
    
    printf("Estado: \n");
    scanf("%c", &State2);

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

    float DensidadePop2 = (float) Population2 / Area2;
    float PIBperCap2 = (float) Population2 / Pib2 ;

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

    printf("Jogo Finalizado!\n");

    return 0;
}