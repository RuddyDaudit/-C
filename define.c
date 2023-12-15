//define permet de definir cela crée une constante 
#include <stdio.h>
#include <stdint.h>
#define TVA 20 // changer le define permet de changer la constante ds le code
//remplacement de contenue
/*  __FILE__(nom du fichier)
	__LINE__(ligne du fichier)
	__DATE__(date de compilation)
	__TIME__(heure de compilation)
*/
int main(void){

	int prix = 15;
	int prixTTC = 0;
	prixTTC = prix + (prixTTC * TVA /100);
	printf("Nom du fichier : %s\n",__FILE__ );
}