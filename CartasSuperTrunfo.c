#include <stdio.h>

int main() {
      printf("***Cartas do Super Trunfo***\n");
        printf("________\n");
      char pais [50]= "Brasil";
      char codigo_da_carta [50] = "A01";
      char nome_do_estado [50] = "São Paulo";
      int populacao = 114500000;
      float area_em_km = 1521;
      float pib = 271975123100;
      int numero_de_pontos_turisticos = 60;
        

       printf("Pais : %s \n", pais);
       printf("Código da Carta : %s \n", codigo_da_carta);
       printf("Nome do Estado : %s \n", nome_do_estado);
       printf("População : %d \n", populacao);
       printf("Área em Km2 : %.2f Km2 \n", area_em_km);
       printf("PIB : %.2f \n", pib);
       printf("Números de Pontos Túristicos : %d \n", numero_de_pontos_turisticos);  

       float densidade_populacional = 752826;
       printf("Densidade Populacional : %.0f\n", densidade_populacional); 

       float pib_per_capital = 7270;
       printf("PIB Per Capital : %.0f\n", densidade_populacional); 

   
      float media;
       media = densidade_populacional / pib_per_capital;
       
     printf("Densidade Populacional: %.9f\n", media);  
     

       printf("________\n");

      char pais2 [50]= "Estados Unidos";
      char codigo_da_carta2 [50] = "B05";
      char nome_do_estado2 [50] = "Nova York";
      int populacao2 = 825800000 ;
      float area_em_km2 = 7838;
      float pib2 = 2000000000000;
      int numero_de_pontos_turisticos2 = 75;
      
       
          printf("Pais : %s \n", pais2);
          printf("Código da Carta : %s \n", codigo_da_carta2);
          printf("Nome do Estado : %s \n", nome_do_estado2);
          printf("População : %d \n", populacao2);
          printf("Área em Km2 : %.2f \n", area_em_km2);
          printf("PIB : %.2f \n", pib2);
          printf("Números de Pontos Túristicos : %d \n", numero_de_pontos_turisticos2);  
        
          float densidade_populacional2 = 1042967;
           printf("Densidade Populacional : %.0f\n", densidade_populacional2);

          float pib_per_capital2 = 81630;
           printf("PIB Per Capital : %.0f\n", pib_per_capital2);

         float media2;
          media2 = densidade_populacional2 / pib_per_capital2;
          
        printf("Densidade Populacional e Pib Per Capital: %.9f\n", media2);
        
     //SUPER PODER
     printf("__________________________\n");
     printf("    \n");

     printf("*SUPER PODER*\n");
     printf("Comparação de Cartas :\n");

     int populacao_br = 114500000;
     float populacao_eua = 825800000;
 
     int comparacao = (float) populacao_br < populacao_eua;
 
     printf("População : Carta 1 Venceu %d\n", comparacao);

     int area_em_km2_br = 1521;
     float area_em_km2_eua = 7838;

     int comparacao2 = (float) area_em_km2_br < area_em_km2_eua;

     printf("Área em Km2 : Carta 1 Venceu %d\n", comparacao2);

     long int pib_br = 271975123100;
     float pib_eua = 2000000000000;

     int comparacao3 = (float) pib_br < pib_eua;

     printf("PIB : Carta 1 venceu %d\n", comparacao3);

     int numero_de_pontos_turiscos_br = 60;
     float numero_de_pontos_turisticos_eua = 75;

     int comparacao4 = (float) numero_de_pontos_turiscos_br < numero_de_pontos_turisticos_eua;

     printf("Número de Pontos Túrirsticos: Carta 1  Venceu %d\n", comparacao4);

     int densidade_populacional_br = 752826;
     float densidade_populacional_eua = 1042967;

     int comparacao5 = (float) densidade_populacional_br < densidade_populacional_eua;

     printf("Densidade Populacional : Carta 1 Venceu %d\n", comparacao5);

     int pib_per_capital_br = 7270;
     int pib_per_capital_eua = 81630;

     int comparacao6 = (float) pib_per_capital_br < pib_per_capital_eua;

     printf("PIB Per Capital : Carta 1 Venceu %d\n", comparacao6);
     
     printf("Super Poder : Carta1 Venceu\n");


    return 0;
}
