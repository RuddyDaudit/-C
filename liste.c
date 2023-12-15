/*
une liste est un ensemble de cellule
liées entre elles par des pointeurs 
le dernier pointeur doit etre nul
*/
typedef float TypeDonnee; /* suvant le le type de données*/

typedef struct Cell{
	
	TypeDonnee donnee; /*def des donnees */
	struct Cell *suivant; /*pointeur sur la struct suiv*/		

}TypeCellule;

int main(int argc, char const *argv[])
{
	TypeCellule *L;
	return 0;
}