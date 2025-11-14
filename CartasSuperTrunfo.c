#include <stdio.h>
// variavel1, variavel2 (correspondem a carta 1 e 2 );
int main(){
char carta1, carta2;
char estado1;
char codigo1[5], codigo2[5];
char cidade1[50], cidade2[50];
 unsigned long int populaçao1, populaçao2;
float areakm²1, areakm²2;
float PIB1 , PIB2;
int numeropontosturisticos1, numeropontosturisticos2;
char estado2;
float densidade1, densidade2;
float pibpercapta1, pibpercapta2;
float superpoder1, superpoder2;
int opçao1, opçao2, soma1, soma2;
// adiçao extra de variavel carta .
//adiçao de um printf para facilitar o usuario sobre qual carta ele esta colocando os dados;

printf("***** JOGO SUPER TRUNFO *****\n");
printf("Digite os dados de sua carta :\n");
printf("Carta 1  : \n");

printf("Digite o estado de sua carta : \n");
scanf("%c", &estado1);

printf("Digite o código de sua carta : \n");
scanf("%s", codigo1);

printf("Digite o nome da cidade de sua carta : \n");
scanf("%s", cidade1);

printf("Digite a populaçao de sua carta : \n");
scanf("%u", &populaçao1);

printf("Digite a área de sua carta : \n");
scanf("%f", &areakm²1);

printf("Digite o PIB desua carta : \n ");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos de sua carta : \n");
scanf("%d", &numeropontosturisticos1);

printf("Carta 2 : \n");
// adiçao de espaço antes de %c para que a tecla enter nao compute como resposta;
printf("Digite o estado de sua carta : \n");
scanf(" %c", &estado2);

printf("Digite o código de sua carta : \n");
scanf("%s", codigo2);

printf("Digite o nome da cidade de sua carta : \n");
scanf("%s", cidade2);

printf("Digite a populaçao de sua carta : \n");
scanf("%u", &populaçao2);

printf("Digite a área  de sua carta : \n");
scanf("%f", &areakm²2);

printf("Digite o PIB de sua carta : ");
scanf("%f", &PIB2);

printf("Digite o numero de pontos turisticos de sua carta : \n");
scanf("%d", &numeropontosturisticos2);
// densidade calculada pela populaçao / area ;
// pib per capta calculado pelo pib/ populaçao;
// cooresponde a carta1
densidade1 = (float) populaçao1 / areakm²1;
pibpercapta1 = (float) PIB1 / populaçao1;
superpoder1 = (float) populaçao1 + areakm²1 + PIB1 + pibpercapta1 + (1 / densidade1) + numeropontosturisticos1;
printf("CARTA 1  \n", carta1);
printf("Estado : %c \n", estado1);
printf("Código : %s \n", codigo1);
printf("Nome da cidade : %s \n", cidade1);
printf("População : %u  \n", populaçao1);
printf("Área : %.2f km² \n", areakm²1);
printf("PIB : R$ %.2f \n ", PIB1);
printf("Numero de pontos turisticos : %d \n", numeropontosturisticos1);
printf("Densidade populacional : %.2f  hab/km² \n", densidade1);
printf("PIB per capta : %.2f reais \n", pibpercapta1);
printf("Super poder : %2.f\n", superpoder1);
// corresponde a carta 2;
densidade2 = populaçao2 / areakm²2;
pibpercapta2 = PIB2 / populaçao2;
superpoder2 = (float) populaçao2 + areakm²2 + PIB2 + pibpercapta2 + (1 / densidade2) + numeropontosturisticos2;
printf("Carta 2 \n", carta2);
printf("Estado :%c \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da cidade : %S \n", cidade2);
printf("População : %u \n", populaçao2);
printf("Àrea : %.2f km² \n", areakm²2);
printf("PIB : R$ %.2f \n", PIB2);
printf("Numero de pontos turisticos : %d \n", numeropontosturisticos2);
printf("Densidade populacional : %.2f  hab/km² \n", densidade2);
printf("PIB per capta : %.2f reais \n", pibpercapta2);
printf("Super poder : %2.f\n", superpoder2);
// adiçao de menu interativo switch para escolha de comparaçao;
printf("Escolha o primeiro atributo que você quer comparar \n");
printf("1- População\n");
printf("2- Areá km²\n");
printf("3- PIB\n");
printf("4- Número de pontos turisticos\n");
printf("5- Densidade populacional\n");
printf("6- PIB per capta\n");
printf("7- Super poder\n");
scanf("%d", &opçao1);
// comparando as cartas ultilizando if ou else ;
switch (opçao1)
{
case 1 :

printf("Você escolheu populaçâo\n");
    //printf("Carta 1:Cidade :%s População:%u - Carta 2:Cidade:%s População:%u\n", cidade1, populaçao1, cidade2, populaçao2);
    if (populaçao1 > populaçao2)
{
    printf("Carta 1 venceu!\n");
}else if (populaçao1 < populaçao2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 2:
printf("Você escolheu Area km²\n");
    //printf("Carta 1:Cidade :%s Area Km²:%.2f - Carta 2:Cidade:%s Area Km²:%.2f\n", cidade1, areakm²1, cidade2, areakm²2);
    if (areakm²1 > areakm²2)
{
    printf("Carta 1 venceu!\n");
}else if (areakm²1 < areakm²2)
{
    printf("Carta 2 venceu!\n");
 }else {
    printf("Houve um empate!\n");    
    }
    break;
case 3:
printf("Você escolheu PIB\n");
    //printf("Carta 1:Cidade :%s PIB:R$%.2f - Carta 2:Cidade:%s PIB:R$%.2f\n", cidade1, PIB1, cidade2, PIB2);
    if (PIB1 > PIB2)
{
    printf("Carta 1 venceu!\n");
}else if (PIB1 < PIB2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 4:
printf("Você escolheu numero de pontos turiticos\n");
    //printf("Carta 1:Cidade :%s Número de pontos turisticos:%d - Carta 2:Cidade:%s Número de pontoa turisticos:%d\n", cidade1, numeropontosturisticos1, cidade2, numeropontosturisticos2);
    if (numeropontosturisticos1 > numeropontosturisticos2)
{
    printf("Carta 1 venceu!\n");
}else if (numeropontosturisticos1 < numeropontosturisticos2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 5:
printf("Você escolheu densidade populacional\n");
    //printf("Carta 1:Cidade :%s Densidade populacional:%.2f - Carta 2:Cidade:%s Densidade populacional:%.2f\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2)
{
    printf("Carta 1 venceu!\n");
}else if (densidade1 > densidade2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 6:
printf("Você escolheu PIB per capta\n");
    //printf("Carta 1:Cidade :%s PIB per capta:R$%.2f - Carta 2:Cidade:%s PIB per capta:R$%.2f\n", cidade1, pibpercapta1, cidade2, pibpercapta2);
    if (pibpercapta1 > pibpercapta2)
{
    printf("Carta 1 venceu!\n");
}else if (pibpercapta1 < pibpercapta2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 7:
printf("Você escolheu super poder\n");
    //printf("Carta 1:Cidade :%s Super poder:%.2f - Carta 2:Cidade:%s Super poder:%.2f\n", cidade1, superpoder1, cidade2, superpoder2);
    if (superpoder1 > superpoder2)
{
    printf("Carta 1 venceu!\n");
}else if (superpoder1 < superpoder2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;                   
default:printf("Opção inválida!");
    break;
}
//adiçao de segundo atributo
printf("Escolha o segundo atributo que você quer comparar \n");
printf("1- População\n");
printf("2- Areá km²\n");
printf("3- PIB\n");
printf("4- Número de pontos turisticos\n");
printf("5- Densidade populacional\n");
printf("6- PIB per capta\n");
printf("7- Super poder\n");
scanf("%d", &opçao2);
// igualando as opçoes para elimnar escolhas iguais 
if (opçao1 == opçao2)
{
   printf("Opção invalida");
} else{
switch (opçao2)
{
case 1:
printf("Você escolheu populaçâo\n");
    //printf("Carta 1:Cidade :%s População:%u - Carta 2:Cidade:%s População:%u\n", cidade1, populaçao1, cidade2, populaçao2);
    if (populaçao1 > populaçao2)
{
    printf("Carta 1 venceu!\n");
}else if (populaçao1 < populaçao2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 2:
printf("Você escolheu area km²\n");
    //printf("Carta 1:Cidade :%s Area Km²:%.2f - Carta 2:Cidade:%s Area Km²:%.2f\n", cidade1, areakm²1, cidade2, areakm²2);
    if (areakm²1 > areakm²2)
{
    printf("Carta 1 venceu!\n");
}else if (areakm²1 < areakm²2)
{
    printf("Carta 2 venceu!\n");
 }else {
    printf("Houve um empate!\n");    
    }
    break;
case 3:
printf("Você escolheu PIB\n");
    //printf("Carta 1:Cidade :%s PIB:R$%.2f - Carta 2:Cidade:%s PIB:R$%.2f\n", cidade1, PIB1, cidade2, PIB2);
    if (PIB1 > PIB2)
{
    printf("Carta 1 venceu!\n");
}else if (PIB1 < PIB2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 4:
printf("Você escolheu numero de pontos turisticos\n");
    //printf("Carta 1:Cidade :%s Número de pontos turisticos:%d - Carta 2:Cidade:%s Número de pontoa turisticos:%d\n", cidade1, numeropontosturisticos1, cidade2, numeropontosturisticos2);
    if (numeropontosturisticos1 > numeropontosturisticos2)
{
    printf("Carta 1 venceu!\n");
}else if (numeropontosturisticos1 < numeropontosturisticos2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 5:
printf("Você escolheu densidade populacional\n");
    //printf("Carta 1:Cidade :%s Densidade populacional:%.2f - Carta 2:Cidade:%s Densidade populacional:%.2f\n", cidade1, densidade1, cidade2, densidade2);
    if (densidade1 < densidade2)
{
    printf("Carta 1 venceu!\n");
}else if (densidade1 > densidade2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 6:
printf("Você escolheu PIB per capta\n");
    //printf("Carta 1:Cidade :%s PIB per capta:R$%.2f - Carta 2:Cidade:%s PIB per capta:R$%.2f\n", cidade1, pibpercapta1, cidade2, pibpercapta2);
    if (pibpercapta1 > pibpercapta2)
{
    printf("Carta 1 venceu!\n");
}else if (pibpercapta1 < pibpercapta2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;
case 7:
printf("Você escolheu super poder\n");
    //printf("Carta 1:Cidade :%s Super poder:%.2f - Carta 2:Cidade:%s Super poder:%.2f\n", cidade1, superpoder1, cidade2, superpoder2);
    if (superpoder1 > superpoder2)
{
    printf("Carta 1 venceu!\n");
}else if (superpoder1 < superpoder2)
{
    printf("Carta 2 venceu!\n");
    }else {
    printf("Houve um empate!\n");    
    }
    break;                    
default:printf("Opção inválida!");
    break;

}
if ((opçao1 == 1 && opçao2 == 2) || (opçao1 == 2 && opçao2 == 1 ))
{
    soma1 = populaçao1 + areakm²1;
    soma2 = populaçao2 + areakm²2;
    printf("Carta 1:Cidade :%s\n População:%u\n Area: %.2f km²\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\nArea:%.2f km²\n Soma dos atributos:%d\n", cidade1, populaçao1, areakm²1, soma1, cidade2, populaçao2, areakm²2, soma2);

if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!");
}else {
    printf("Houve um empate!!!");
}

}
else if ((opçao1 == 1 && opçao2 == 3) || (opçao1 ==3 && opçao2 ==1))
{
    
    soma1 = populaçao1 + PIB1;
    soma2 = populaçao2 + PIB2;
    printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 1 && opçao2 == 4) || (opçao1 == 4 && opçao2 == 1 ))
{
    
    soma1 = populaçao1 + numeropontosturisticos1;
    soma2 = populaçao2 + numeropontosturisticos2;
    printf("Carta 1:Cidade :%s\n População:%u\n Numero de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n Numero de pontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, populaçao1, numeropontosturisticos1, soma1, cidade2, populaçao2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 1 && opçao2 == 5) || (opçao1 ==5 && opçao2 == 1))
{
    
    soma1 = populaçao1 + (densidade1 / 1);
    soma2 = populaçao2 + (densidade2 / 1);
    printf("Carta 1:Cidade :%s\n População:%u\n Densidade populacional:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n Densidade populacional:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, densidade1, soma1, cidade2, populaçao2, densidade2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 1 && opçao2 == 6) || (opçao1 == 6 && opçao2 == 1))
{
    
    soma1 = populaçao1 + pibpercapta1;
    soma2 = populaçao2 + pibpercapta2;
    printf("Carta 1:Cidade :%s\n População:%u\n PIB per capta:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB per capta:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, pibpercapta1, soma1, cidade2, populaçao2, pibpercapta2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 1 && opçao2 == 7) && (opçao1 == 7 && opçao2 == 1))
{
    
    soma1 = populaçao1 + superpoder1;
    soma2 = populaçao2 + superpoder2;
    printf("Carta 1:Cidade :%s\n População:%u\n Super poder:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n Super poder:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, superpoder1, soma1, cidade2, populaçao2, superpoder2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 2 && opçao2 == 3) || (opçao1 == 3 && opçao2 == 2))
{
    
    soma1 = areakm²1 + PIB1;
    soma2 = areakm²2 + PIB2;
    printf("Carta 1:Cidade :%s\n Area:%.2fkm²\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Area:%.2fkm²\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, areakm²1, PIB1, soma1, cidade2, areakm²2, PIB2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 2 && opçao2 == 4) || (opçao1 == 4 && opçao2 == 2))
{
    
    soma1 = areakm²1 + numeropontosturisticos1;
    soma2 = areakm²2 + numeropontosturisticos2;
    printf("Carta 1:Cidade :%s\n Area:%.2fkm²\n Numro de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Area:%.2f\n Numero depontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, areakm²1, numeropontosturisticos1, soma1, cidade2, areakm²2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 2 && opçao2 == 5)|| (opçao1 == 5 && opçao2 == 2))
{
    
    soma1 = areakm²1 + (densidade1 /1);
    soma2 = areakm²2 + (densidade2 /1);
    printf("Carta 1:Cidade :%s\n area:%.2fkm²\n Densidade populacional: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Area:%.2fkm²\n Densidade populacional:%.2f \n Soma dos atributos:%d\n", cidade1, areakm²1, densidade1, soma1, cidade2, areakm²2, densidade2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 2 && opçao2 == 6) || (opçao1 == 6 && opçao2 == 2))
{
    
    soma1 = areakm²1 + pibpercapta1;
    soma2 = areakm²2 + pibpercapta2;
    printf("Carta 1:Cidade :%s\n Area:%.2fkm²\n PIB per capta:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Area:%.2fkm²\n PIB per capta:%.2f \n Soma dos atributos:%d\n", cidade1, areakm²1, pibpercapta1, soma1, cidade2, areakm²2, pibpercapta2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 2 && opçao2 == 7) || (opçao1 == 7 && opçao2 == 2))
{
    
    soma1 = areakm²1 + superpoder1;
    soma2 = areakm²2 + superpoder2;
    printf("Carta 1:Cidade :%s\n Area:%.2fkm²\n Super poder:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Area:%.2fkm²\n Super poder:%.2f \n Soma dos atributos:%d\n", cidade1, areakm²1, superpoder1, soma1, cidade2, areakm²2, superpoder2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 3 && opçao2 == 4) || (opçao1 == 4 && opçao2 == 3))
{
    
    soma1 = PIB1 + numeropontosturisticos1;
    soma2 = numeropontosturisticos2 + PIB2;
    printf("Carta 1:Cidade :%s\n PIB:%.2f\n Numero de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n PIB:%.2f\n Numero de pontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, PIB1, numeropontosturisticos1, soma1, cidade2, PIB2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 3 && opçao2 == 5) || (opçao1 == 5 && opçao2 == 3))
{
    
    soma1 = (densidade1 / 1) + PIB1;
    soma2 = (densidade2 / 1) + PIB2;
    printf("Carta 1:Cidade :%s\n Densidade populacional:%.2fkm²\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Densidade populacional:%.2fkm²\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, densidade1, PIB1, soma1, cidade2, densidade2, PIB2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 3 && opçao2 == 6) || (opçao1 == 6 && opçao2 == 3))
{
    
    soma1 = PIB1 + pibpercapta1;
    soma2 = pibpercapta2 + PIB2;
    printf("Carta 1:Cidade :%s\n PIB:%.2f\n PIB per capta:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n PIB:%.2f\n PIB per capta:%.2f \n Soma dos atributos:%d\n", cidade1, PIB1, pibpercapta1, soma1, cidade2, PIB2, pibpercapta2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 3 && opçao2 == 7) || (opçao1 == 7 && opçao2 == 3))
{
    
    soma1 = PIB1 + superpoder1;
    soma2 = superpoder2 + PIB2;
    printf("Carta 1:Cidade :%s\n PIB:%.2f\n Super poder:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n PIB:%.2f\n Super poder :%.2f \n Soma dos atributos:%d\n", cidade1, PIB1, superpoder1, soma1, cidade2, PIB2, superpoder2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 4 && opçao2 == 5) || (opçao1 == 5 && opçao2 == 4))
{
    
    soma1 = (densidade1 / 1) + numeropontosturisticos1;
    soma2 = numeropontosturisticos2 + (densidade2 / 1);
    printf("Carta 1:Cidade :%s\n Densidade populacional:%.2f\n Numero de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Densidade populacional:%.2f\n Numero de pontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, densidade1, numeropontosturisticos1, soma1, cidade2, densidade2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 4 && opçao2 == 6) || (opçao1 == 6 && opçao2 == 4))
{
    
    soma1 = pibpercapta1 + numeropontosturisticos1;
    soma2 = numeropontosturisticos2 + pibpercapta2;
    printf("Carta 1:Cidade :%s\n PIB per capta:%.2f\n Numero de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n PIB per capta:%.2f\n Numero de pontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, pibpercapta1, numeropontosturisticos1, soma1, cidade2, pibpercapta2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 4 && opçao2 == 7) || (opçao1 == 7 && opçao2 == 4))
{
    
    soma1 = superpoder1 + numeropontosturisticos1;
    soma2 = numeropontosturisticos2 + superpoder2;
    printf("Carta 1:Cidade :%s\n Super poder:%.2f\n Numero de pontos turisticos:%d\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Super poder:%.2f\n Numero de pontos turisticos:%d \n Soma dos atributos:%d\n", cidade1, superpoder1, numeropontosturisticos1, soma1, cidade2, superpoder2, numeropontosturisticos2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 5 && opçao2 == 6) || (opçao1 == 6 && opçao2 == 5))
{
    
    soma1 = (densidade1 / 1) + pibpercapta1;
    soma2 = (densidade2 / 1) + pibpercapta2;
    printf("Carta 1:Cidade :%s\n Densidade populacional:%.2fkm²\n PIB per capta:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Densidade populacional:%.2fkm²\n PIB per capta:%.2f \n Soma dos atributos:%d\n", cidade1, densidade1, pibpercapta1, soma1, cidade2, densidade2, pibpercapta2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 5 && opçao2 == 7) || (opçao1 == 7 && opçao2 == 5))
{
    
    soma1 = (densidade1 / 1) + superpoder1;
    soma2 = (densidade2 / 1) + superpoder2;
    printf("Carta 1:Cidade :%s\n Densidade populacional:%.2fkm²\n Super poder:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Densidade populacional:%.2fkm²\n Super poder:%.2f \n Soma dos atributos:%d\n", cidade1, densidade1, superpoder1, soma1, cidade2, densidade2, superpoder2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}else if ((opçao1 == 6 && opçao2 == 7) || (opçao1 == 7 && opçao2 == 6))
{
    
    soma1 = superpoder1 + pibpercapta1;
    soma2 = pibpercapta2 + superpoder2;
    printf("Carta 1:Cidade :%s\n Super poder:%.2f\n PIB per capta:%.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n Super poder:%.2f\n PIB per capta:%.2f \n Soma dos atributos:%d\n", cidade1, superpoder1, pibpercapta1, soma1, cidade2, superpoder2, pibpercapta2, soma2);
if (soma1 > soma2)
{
  printf("Carta 1 venceu a rodada!!!\n");
} else if (soma1 < soma2)
{
  printf("Carta 2 venceu a rodada!!!\n");
}else {
    printf("Houve um empate!!!\n");
}
//printf("Carta 1:Cidade :%s\n População:%u\n PIB: %.2f\n Soma dos atributos:%d\n ----------------\n Carta 2:Cidade:%s\n População:%u\n PIB:%.2f \n Soma dos atributos:%d\n", cidade1, populaçao1, PIB1, soma1, cidade2, populaçao2, PIB2, soma2);

}



}

}











//%c caracter;
//%s char com (string) usado em codigo e cidade;
//%d usado para numeros inteiros como populaçao e pontos turisticos;
//%f usado para o float duas vezes tamebm em area e PIB;
//%u unsigned;
