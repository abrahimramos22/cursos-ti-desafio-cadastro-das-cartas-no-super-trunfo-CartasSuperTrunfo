#include <stdio.h>

int main(){
    char estado, carta;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;


    printf ("Escolha uma carta: \n");
    scanf ("%d", &carta);

    printf ("Digite codigo que esta na carta: \n");
    scanf ("%d", &codigo);

    printf ("Digite nome do Estado: \n");
    scanf ("%s", &estado);

    printf ("Digite o nome da sua cidade: \n");
    scanf ("%s",&nomeCidade);

    printf ("Digite quantidade de populaçao local : \n");
    scanf ("%d",&populacao);

    printf ("Area da cidade: \n");
    scanf ("%s",&area);

    printf ("Digite o PIB Local: \n");
    scanf ("%d",&pib);

    printf ("Digite a quantide de pontos turusticos: \n");
    scanf ("%d",&pontosTuristicos);




    printf("Carta: %d \n", carta);
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %d km²\n", area);
    printf("PIB: %d\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    





    return 0;
}