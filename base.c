#include <stdio.h> 
int main()
{
    char estado1[15], estado2[15];
    char codigo1 [4], codigo2[4];
    char cidade1 [20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2; 
    float densidade1, densidade2;
    float pibpercapita1 , pibpercapita2;


    //PRIMEIRA CARTA

    printf("Digite as seguintes informações para a carta1:\n");

    printf("estado:");
    scanf("%s", estado1);

    printf("Codigo:");
    scanf("%s", codigo1);

    printf("Cidade:");
    scanf("%s", cidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área:");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf ("Pontos Turisticos:");
    scanf("%d", &pt1);

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    printf("-- CARTA 1 -- \n");
    printf("ESTADO: %s \n", estado1 );
    printf("CÓDIGO: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULAÇÂO: %d\n", populacao1);
    printf("ÁREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pt1);
    printf("DENSIDADE POPULACIONAL:%f \n", densidade1 );
    printf("PIB PER CAPITA: %f \n", pibpercapita1);


    //SEGUNDA CARTA



    printf("Digite as seguintes informações para a carta2:\n");

    printf("estado:\n");
    scanf("%s", estado2);

    printf("Codigo\n:");
    scanf("%s", codigo2);

    printf("Cidade:\n");
    scanf("%s", cidade2);

    printf("População\n:");
    scanf("%d", &populacao2);

    printf("Área:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f" , &pib2);

    printf ("Pontos Turisticos:\n");
    scanf("%d", &pt2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    printf("-- CARTA 2 -- \n");
    printf("ESTADO: %s \n", estado2 );
    printf("CÓDIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÂO: %d\n", populacao2);
    printf("ÁREA: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pt2);
    printf("DENSIDADE POPULACIONAL:%f \n", densidade2);
    printf("PIB PER CAPITA: %f \n", pibpercapita2);
    printf("DENSIDADE POPULACIONAL:%f \n", densidade2);
    printf("PIB PER CAPITA: %1f \n", pibpercapita2);


    //RESULTADO

    printf("RESULTADO DAS 2 CARTAS");

    printf("-- CARTA 1 -- \n");
    printf("ESTADO: %s \n", estado1 );
    printf("CÓDIGO: %s\n", codigo1);
    printf("NOME DA CIDADE: %s\n", cidade1);
    printf("POPULAÇÂO: %d\n", populacao1);
    printf("ÁREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pt1);
    printf("DENSIDADE POPULACIONAL:%f \n", densidade1 );
    printf("PIB PER CAPITA: %f \n", pibpercapita1);



    printf("-- CARTA 2 -- \n");
    printf("ESTADO: %s \n", estado2 );
    printf("CÓDIGO: %s\n", codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÂO: %d\n", populacao2);
    printf("ÁREA: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("PONTOS TURISTICOS: %d\n", pt2);
    printf("DENSIDADE POPULACIONAL:%f \n", densidade2 );
    printf("PIB PER CAPITA: %f \n", pibpercapita2);




    
    
    return 0;
}

