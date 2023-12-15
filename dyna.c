#include <stdio.h>
#include <stdlib.h>

/*
	sizeof(donnes) : return la taille en octet d'une donnée
	malloc(taille en octet : allouer une zone
	free(donnees) : liberer les données
*/

int main(int argc, char const *argv[])
{
	int nbjoueurs = 0;
	int *liste = NULL;
	int i;

	printf("Cb de joueurs ? %s\n");
	scanf("%d", &nbjoueurs);

	liste = malloc(sizeof(int) * nbjoueurs);

		if(liste == NULL)
			exit(1);
	for(i = 0; i< nbjoueurs;i++){
		printf("Joueur %d -> numero %d\n",i+1,i *3);
		liste[i] = i  * 3; 
	}
	
	nbjoueurs = 10;
	
	liste = realloc(liste, nbjoueurs * sizeof(int));
	
	if(liste == NULL)
			exit(1);
	for(i = 0; i< nbjoueurs;i++){
		printf("Joueur %d -> numero %d\n",i+1,i *3);
		liste[i] = i  * 3; 
	}

	free(liste);
	return 0;
}