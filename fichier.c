#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/*
	fopen(<ficj=hier> , <mode_ouverture>) : r(lecture)
											w(ecriture)
											a(ajout fin fichier)
											r+(lecture/ecriture, doit exister)
											w+(lecture/ecriture, supprime contenu)
											a+(ajout lec/ect, fin de fichier)
	fclose(<fichier>) : fermer un fichier
	feof(<fichier>) : tester la fin d'un fichier

	[LECTURE]
	fgetc() : lire un caract
	fgets(<char>,<taille>,<fichier>) : lit une ligne
	fscanf(<fichier>,format>, ...) : lit un texte formaté	

	[ECRITURE]
	fputc(<caract>,<fichier) : ecrit un caract
	fputs(<chaine>,<fichier>) : ecrit une ligne de texte
	fprint(<fichier>,<format>,...)  : ecrrit un texte formaté
*/
int main(int argc, char const *argv[])
{
	FILE *fic = fopen("data.c","r");
	
	/*write*/
	
	/*fputc('J',data)
	


	*/

	/*signed char texte[256];*/
	
	int lettre =10;
	
	if(fic == NULL)
		exit(1);
	
	/*while(fgets(texte,256,fic) != NULL)
	printf("%s\n",texte);*/
	
	while(1){
		lettre = fgetc(fic);
		if(feof(fic))
			break;
		printf("%c",lettre);
	}
	fclose(fic);
}