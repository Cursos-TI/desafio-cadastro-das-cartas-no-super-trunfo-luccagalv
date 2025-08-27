 #include <stdio.h>

int main(){
   char Estado[20] = "Pernambuco";
   char codigo[20] = "A01";
   char Nome_da_cidade[20] = "Recife";
   int Populacao = 1645727;
   float Area = 2185.3;
   float PIB = 200.5;
   int Números_De_Pontos_Turísticos = 10;

   printf("Estado: %s\n", Estado);
   scanf("%s", Estado);

   printf("Código: %s\n", codigo);
   scanf("%s", &codigo);

   printf("Nome da Cidade: %s\n", Nome_da_cidade);
   scanf("%s", &Nome_da_cidade);

   printf("População: %d\n", Populacao);
   scanf("%d", &Populacao);

   printf("Área: %.2f km²\n", Area);
   scanf("%f", &Area);

   printf("PIB: %.2f bilhões\n", PIB);
   scanf("%f", &PIB);

   printf("Número de Pontos Turísticos: %d\n", Números_De_Pontos_Turísticos);
   scanf("%d", &Números_De_Pontos_Turísticos);

   return 0;
   
}


