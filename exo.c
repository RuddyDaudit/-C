#include <stdio.h>
int main(void){
/*
	&maVariable : adresse ou est stockée la variable
	maVariable : contenu de la variable(ex maVariable = 15)
*/

int ageUtilisateur;
printf("Quel age avez-vous ? ");
scanf("%d", &ageUtilisateur);
	// condition
	if (ageUtilisateur > 50)
	{
		printf("Vous avez %d ans et vous êtes vieux\n",ageUtilisateur);
	}else
	{
		printf("Vous avez %d ans et vous êtes jeune\n",ageUtilisateur);
	}
	// Boucles
	int i = 0;//compteur
	while(i<20){
		printf("The World ! \n");
		i++;//condition d'arret
	}
	int j;
	for(j = 0; j < 5; j++){
		printf("Star Breaker ! \n");
	}

}