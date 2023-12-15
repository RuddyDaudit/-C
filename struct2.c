#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct Player
{
	signed char nom[256];
	int hp;
	int mp;
};Player;

/**************************************************/

void create_player(Player *p){
	strcpy((*p).nom,"ruddy");
	(*p).hp = 100;
	(*p).mp = 100;
}
/*******************************************************/

int main(int argc, char const *argv[])
{
	Player p1 = {"",0,0};
	create_player(&p1);
	printf("Nom du joueur: %s\n",p1.nom);
	printf("Nombre de pv: %d\n Nombre de mp: %d\n",p1.hp,p1.mp);
	
}