#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
//Function

int calcul(nb1,nb2){ //toujour mettre le type de sortie
	int resultat;
	resultat = nb1 + nb2;
	printf("%d\n",resultat);
	return resultat;
}

int main(void){

int nb1;
int nb2;
int res;

printf("Nombre 1 : ");
scanf("%d",&nb1);

printf("Nombre 2 : ");
scanf("%d\n", &nb2);

res = calcul(nb1,nb2);

printf("%d",res);
}