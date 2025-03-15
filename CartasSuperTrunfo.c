#include <stdio.h>

int main() {
      printf("***Cartas do Super Trunfo***\n");
        printf("____\n");
      char pais [50]= "Brasil";
      char codigo_da_carta [50] = "A01";
      char nome_do_estado [50] = "São Paulo";
      int populacao = 114500000;
      float area_em_km = 1521;
      float pib = 271975123100;
      int numero_de_pontos_turisticos = 60;
      float densidade_populacional = 752826;
      float pib_per_capita = 7270;
      
      int media;
        media = densidade_populacional / pib_per_capita;
       
       printf("Pais : %s \n", pais);
       printf("Código da Carta : %s \n", codigo_da_carta);
       printf("Nome do Estado : %s \n", nome_do_estado);
       printf("População : %d \n", populacao);
       printf("Área em Km2 : %.2f Km2 \n", area_em_km);
       printf("PIB : %.2f \n", pib);
       printf("Números de Pontos Túristicos : %d \n", numero_de_pontos_turisticos);  
          printf("Densidade Populacional : %d \n", media);
          printf("PIB Per Capita : %d \n", media);
          printf("Densidade populacional e PIB Per Capita : %d \n", media); 

       printf("____\n");
      char pais2 [50]= "Estados Unidos";
      char codigo_da_carta2 [50] = "B05";
      char nome_do_estado2 [50] = "Nova York";
      int populacao2 = 825800000 ;
      float area_em_km2 = 7838;
      float pib2 = 2000000000000;
      int numero_de_pontos_turisticos2 = 75;
      float densidade_populacional2 = 752826;
      float pib_per_capita2 = 7270;
      
      int media2;
        media = densidade_populacional2 / pib_per_capita2;
       
          printf("Pais : %s \n", pais2);
          printf("Código da Carta : %s \n", codigo_da_carta2);
          printf("Nome do Estado : %s \n", nome_do_estado2);
          printf("População : %d \n", populacao2);
          printf("Área em Km2 : %.2f \n", area_em_km2);
          printf("PIB : %.2f \n", pib2);
          printf("Números de Pontos Túristicos : %d \n", numero_de_pontos_turisticos2);  
            printf("Densidade Populacional : %d \n", media2);
            printf("PIB Per Capita : %d \n", media2);
            printf("Densidade populacional e PIB Per Capita : %d \n", media2);  
        
    return 0;
}
