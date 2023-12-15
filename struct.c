#include <stdio.h>
#include <stdint.h>

typedef struct Player
{
	signed char nom[256];
	int hp;
	int mp;
}Player;
//remplacer "struct Player" par "Player"

int main(int argc, char const *argv[])
{
	Player p1 = {"Ruddy",0,0};
	printf("Nom du joueur: %s\n",p1.nom);
	printf("Nombre de pv: %d\n Nombre de mp: %d\n",p1.hp,p1.mp);
	
}