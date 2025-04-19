#include <stdio.h>

int main() {
      printf("***Cartas do Super Trunfo***\n");
        printf("________\n");
        printf(" \n");

      char pais [50]= "Brasil";
      char codigo_da_carta [50] = "1";
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
       printf(" \n");

      char pais2 [50]= "Estados Unidos";
      char codigo_da_carta2 [50] = "2";
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
     printf("________\n");
     printf("    \n");

  printf("***SUPER PODER***\n");
  printf("    \n");

  printf("**COMPARAÇÃO DE CARTAS**\n");
  printf("ATRIBUITO : POPULAÇÃO\n");
  printf("Carta 1 - São Paulo(SP) : 114500000\n");
  printf("Carta 2 - Nova York(NY) : 825800000\n");

  if(populacao > populacao2){
    printf("População : Carta 1 Venceu\n");
    } else{
    printf("População : Carta 2 Venceu\n");
    }

    printf("    \n");
  
    printf("ATRIBUITO : ÁREA EM KM2\n");
    printf("Carta 1 - São Paulo(SP) : 1521\n");
    printf("Carta 2 - Nova York(NY) : 7838\n");

  if(area_em_km > area_em_km2){
    printf("Área em Km2 : Carta 1 Venceu\n");
    } else{
    printf("Área em km2 : Carta 2 Venceu\n");
    }

    printf("    \n");
  
    printf("ATRIBUITO : PIB\n");
    printf("Carta 1 - São Paulo(SP) : 271975123100\n");
    printf("Carta 2 - Nova York(NY) : 2000000000000\n");

  if (pib > pib2){
    printf("PIB : Carta 1 Venceu\n");
    } else {
    printf("PIB : Carta 2 Venceu\n");
    }
  
    printf("    \n");
  
    printf("ATRIBUITO : NÚMERO DE PONTOS TÚRISTICOS\n");
    printf("Carta 1 - São Paulo(SP) : 60\n");
    printf("Carta 2 - Nova York(NY) : 75\n");

  if (numero_de_pontos_turisticos > numero_de_pontos_turisticos2){
    printf("Número de Pontos Túristicos : Carta 1 Venceu\n");
   } else{
    printf("Números de Pontos Túristicos : Carta 2 Venceu\n");
   }
  
   printf("    \n");
  
   printf("ATRIBUITO : DENSIDADE POPULACIONAL\n");
   printf("Carta 1 - São Paulo(SP) : 752826\n");
   printf("Carta 2 - Nova York(NY) : 1042967\n");

  if (densidade_populacional2 > densidade_populacional) {
    printf("Densidade Populacional : Carta 1 Venceu\n");
    } else{
    printf("Densidade Populacional : Carta 2 Venceu\n");
    }
  
    printf("    \n");
  
    printf("ATRIBUITO : PIB PE CAPITAL\n");
    printf("Carta 1 - São Paulo(SP) : 7270\n");
    printf("Carta 2 - Nova York(NY) : 81630\n");

  if (pib_per_capital > pib_per_capital2) {
    printf("PIB Per Capital : Carta 1 Venceu\n");
    } else{
    printf("PIB Per Capital : Carta 2 Venceu\n");
    }
   
    printf("________\n");
    printf(" \n");

  if (populacao,area_em_km,pib,numero_de_pontos_turisticos,pib_per_capital,densidade_populacional >= populacao2,area_em_km2,pib2,numero_de_pontos_turisticos2,pib_per_capital2,densidade_populacional2){
    printf("***SUPER PODER*** : CARTA 1 VENCEU!\n");
  }else
  {
    printf("***SUPER P0DER*** : CARTA 2 VENCEU!\n");
  }
  
  printf("________\n");
    return 0;
}
