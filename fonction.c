#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
//Fonction
int init_ball(int posX){
	posX;
	scanf("%d\n", &posX);
	return posX;

}
int main(void){

	int balleX;
	balleX = init_ball(balleX);
	printf(" coordonnée de x est égal à: %d\n", balleX);
	// une partie de jeu se fait...
	balleX = init_ball(balleX);
	printf(" coordonnée de x est égal à: %d\n", balleX);
}
