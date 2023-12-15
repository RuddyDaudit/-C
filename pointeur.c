#include <stdio.h>
#include <stdint.h>
/*[POINTEURS]
	monPointeur : adresse de la variable pointée
	*monPointeur : valeur de la variable pointée
	&monPointeur : adresse du pointeur


*/
void inverser_nombres(nombreA,nombreB){
	int temperature = 0;
	
printf("FONCTION AVANT : A =%d et B =%d\n", nombreA, nombreB);
	temperature = nombreB;
	nombreB=nombreA;
	nombreA=temperature;
	printf("FONCTION APRES : A = %d et B = %d\n", nombreA,nombreB);
}
int main(int argc, char const *argv[])
{
	int nombreA =100;
	int nombreB=50;
	
	//déclaration de pt
	int *pt1 = &nombreA;
	int *pt2 = &nombreB;
	
	printf("AVANT : A =%d et B =%d\n", nombreA, nombreB);
	inverser_nombres(nombreA,nombreB);
	printf("APRES : A = %d et B = %d\n", nombreA,nombreB);
	
	return 0;
}