#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <sprintf.h>
/*
['r']
['u']
['d']
['d']
['y']
['\0'] caractere de fin d'une chaine
*/

int main(int argc, char const *argv[])
{
	/*-----------------------------------------------*/
	signed char prenom[] = "Ruddy";
	signed char new_p[100];
	printf("Quel est ton prenom : %s\n",prenom);
	scanf("%s",new_p);

	/*fct copy*/strcpy(prenom,new_p);
	
	printf("Ton nouveau prenom : %s\n",new_p );
	/*************************************************/
	char prenom[25]="Ruddy";
	printf("TOn nom est : %s\n",prenom);
	strcpy(prenom,"Andy");
	printf("Ton nom est mtn : %s\n",prenom);
	/*****************************************************/
	signed char text[]="Ruddy";
	printf("Texte :%s\n",texte);
	/*fct long d'une chaine*/printf("TAille du texte : %d\n",strlen(texte));	
	/******************************************************/
	signed char text[]="Ruddy";
	signed char text2[]="Andy";
	/*fct cmp deux chaiens (lexical)*/int test = strcmp(text,text2);
	if(test == 0)
	printf("les deux mots sont les memes%s\n");
	else if (test<0)
	printf("%s < %s\n",text,text2);
	else
	printf("%s > %s\n",text , text2 );
	/*************************************************************/
	signed char text[]="Boul et Bill";
	signed char mot[]="Bill";
	/*chercher une chaine ds une autre*/if(strstr(texte,mot)) = "Boul et Bill";
		printf("Texte trouvé !\n");
	/***************************************************************/
	signed char text[]="Ying-Yang";
	signed char c ='-';

	/**affiche ce le mot apartir du pointée*/char *resultat = strchr(text,c);
	printf("%s\n",resultat);
	/***************************************************************/
	char texte[256];
	sprintf(texte,"Ruddy",5);
	printf("%s\n",texte);

}

