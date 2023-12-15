#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef float TypeDonnee;
typedef struct {
	int nb_elem; /*nombre d'elm ds la pile*/
	int nb_elem_max; /*capacité de la pile*/
	TypeDonnee *tab; /*tableau contenat les elem*/
}Pile;

/*crée un pile vide*/
Pile Initialiser(int nb_max){
	Pile pilevide;
	pilevide.nb_elem=0; /*pile vide*/
	pilevide.nb_elem_max = nb_max; /* capacité nb_max*/
	/*allocation des elements*/
	pilevide.tab = (TypeDonnee*)malloc(nb_max * sizeof(TypeDonnee));
	return pilevide;
}

/*pile vide/pile peine*/
int EstVide(Pile P){
	/*return 1 si le nb = 0*/
	if(P.nb_elem == 0)
		printf("test reussi\n");
	return P.nb_elem;
}


/*accéder au sommet*/
/*le sommet est le dernier element entré ds le tab, effectue un passage par adreese*/

int AccederSommet(Pile P, TypeDonnee *pelem){
	if(EstVide(P))
		return 1; /*erreur*/
	*pelem = P.tab[P.nb_elem - 1]; /* on renvoie l'élément*/
}

/*ajouter un element*/
/*passer par la pile par adresse, la fct empiler*/
int Empiler(Pile* pP, TypeDonnee elem){
	if (EstPleine(*pP))
		return 1 /*erreur*/
	pP->tab[pP->nb_elem]= elem; /*ajout*/
	pP->nb_elem++; /*incrémentation du nb d'élém*/
}
/* supprimer*/
char Depiler(Pile *pP, TypeDonnee *pelem){
	if(EstVide(*pP))
		return 1;
	*pelem = pP->tab[pP->nb_elem - 1];/*on renvoie le somme*/
	pP-> nb_elem--; /*décrémentation*/
}
/*vider et détruire*/

void Vider(Pile *pP){
	pP->nb_elem = 0; /*renit*/
}

void Detruire(Pile *pP){
	if(pP-> nb_elem_max != 0)
		free(pP->tab); /*frre memeory*/
	pP->nb_elem = 0;
	pP-> nb_elem_max = 0;
}
///////////////////////////////////////////////////////////////////////
int main(int argc, char const *argv[])
{
		
	return 0;
}