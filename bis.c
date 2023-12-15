#include <stdio.h>
#include <stdint.h>
#define TAILLE 9

char *f_strchr(const char *texte, int c);

int main(int argc, char const *argv[]){
	char texte[] = "Ying-Yang";
	char *pointeur = NULL;
	char b = 'a';
	int c; 
	pointeur = f_strchr(texte,'a');
	printf("caract suiv.: %s\n", pointeur);

}

/*fct strchr: chercher 1ère occurence du caractère*/
char *f_strchr(const char *texte, int c){
	int i = TAILLE;
	const char *j;
     
    while (texte[i] != c && i >= '0'){
    
    if (texte[i] == (char) c){
        j = &texte[i];
    	i = -1;
   		}
 
    i--;
	
	}
}