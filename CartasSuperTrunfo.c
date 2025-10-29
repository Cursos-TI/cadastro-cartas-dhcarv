#include <stdio.h>
// desafio super trunfo fase 1 ;
// variavel1, variavel2 (correspondem a carta 1 e 2 );
int main(){
char carta1, carta2;
char estado1;
char codigo1[5], codigo2[5];
char cidade1[50], cidade2[50];
int populaçao1, populaçao2;
float areakm²1, areakm²2;
float PIB1 , PIB2;
int numeropontosturisticos1, numeropontosturisticos2;
char estado2;
// adiçao extra de variavel carta .
//adiçao de um printf para facilitar o usuario sobre qual carta ele esta colocando os dados;
printf("digite os dados da primeira carta : \n");

printf("Digite o estado de sua carta : \n");
scanf("%c", &estado1);

printf("Digite o código de sua carta : \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade de sua carta : \n");
scanf("%s", cidade1);

printf("Digite a populaçao de sua carta : \n");
scanf("%d", &populaçao1);

printf("Digite a área de sua carta : \n");
scanf("%f", &areakm²1);

printf("Digite o PIB desua carta : \n ");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos de sua carta : \n");
scanf("%d", &numeropontosturisticos1);

printf("digite os dados da segunda carta : \n");
// adiçao de espaço antes de %c para que a tecla enter nao compute como resposta;
printf("Digite o estado de sua carta : \n");
scanf(" %c", &estado2);

printf("Digite o código de sua carta : \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade de sua carta : \n");
scanf("%s", cidade2);

printf("Digite a populaçao de sua carta : \n");
scanf("%d", &populaçao2);

printf("Digite a área  de sua carta : \n");
scanf("%f", &areakm²2);

printf("Digite o PIB de sua carta : ");
scanf("%f", &PIB2);

printf("Digite o numero de pontos turisticos de sua carta : \n");
scanf("%d", &numeropontosturisticos2);

// cooresponde a carta1

printf("CARTA 1  \n", carta1);
printf("Estado : %c \n", estado1);
printf("Código : %s \n", codigo1);
printf("Nome da cidade : %s \n", cidade1);
printf("População : %d  \n", populaçao1);
printf("Área : %f km² \n", areakm²1);
printf("PIB : R$ %f \n ", PIB1);
printf("Numero de pontos turisticos : %d \n", numeropontosturisticos1);


// corresponde a carta 2

printf("Carta 2 \n", carta2);
printf("Estado :%c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da cidade : %S \n", cidade2);
printf("População : %d \n", populaçao2);
printf("Àrea : %f km² \n", areakm²2);
printf("PIB : R$ %f \n", PIB2);
printf("Numero de pontos turisticos : %d \n", numeropontosturisticos2);
//%c caracter ;
//%s char com (string) usado em codigo e cidade;
//%d usado para numeros inteiros como populaçao e pontos turisticos;
//%f usado para o float duas vezes tamebm em area e PIB;

return 0;


}


