#include <stdio.h>

int main () {
char estado [3]; // por exemplo: "SP", "RJ"
int codigo_carta;
char nome_da_cidade[50];
int população;
float area_km;
float PIB;
int  quantidades_pontos_turísticos;

printf("código da carta: ");
    scanf ("%d", &codigo_carta);

'\n'

printf("digite o nome do estado (ex: SP): ");
    scanf("%s", estado);

"\n"
getchar(); // limpa o '\n' deixando no buffer

printf("nome da cidade:");
    fgets(nome_da_cidade, 50, stdin);

"\n"

printf("área em km²:");
    scanf("%f", &area_km);

"\n"

printf("PIB:");
    scanf("%f", &PIB);

"\n"

prinf("quantidade de ponstos turisticos:");
    scanf("%d", &quantida_pontos_turisticos);

//exibindo os dados lidos

printf("\n--- Dados lidos ---\n");
printf("Codigo da carta: %d\n", codigo_carta);
printf("Estado: %s\n", estado);
printf("Cidade: %s", nome_da_cidade); // ja tem "\n" embutido no fgets
printf("Area: %.2f km²\n", area_km);
printf("PIB: %.2f\n", PIB);
printf("Pontos turisticos: %d\n", quantidades_pontos_turísticos);

return 0;

}
