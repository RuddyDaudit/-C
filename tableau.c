
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#define TAILLE 10

/*


tableau : adresse du tableau
*tableau : première élément  du tableau
*(tableau + X) element d'indice X

(NOTE)
	tableau[5] meme chose que *(tableau +5)

*/
void afficher_tableau(int *tab, int taille);

int main(int argc, char const *argv[])
{
	int tab[TAILLE/*nombre de donées*/];
	int i;
	for(i=0;i<TAILLE;i++)
		printf("%d\n",tab[i]);

}
void afficher_tableau(int *tab,TAILLE){

	int i;
	for(i = 0; i<taille; i++)
		printf("%d\n",tab[i]);
}
/*static permet de renvoyer un tableau*/0
