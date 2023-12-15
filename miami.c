#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE* a = fopen("ny.c","w+");

	/*char c = 'r';
	fwrite(&c,sizeof(char),1,a);
	fflush(a) forcage d'ecriture

	int ch = 1;
	fputc(ch,a);

	fputs("toto",a);

	char* s = "ruddy";
	fwrite(s,sizeof(char),5,a);

	int d = 93;
	fprintf(a, "%d\n",d);
*/
	/*char* p;
	fread(&p,sizeof(char*),5,a);

	char u = fgetc(a);
	fread(&u,sizeof(char),1,a);*/

	feof(a);/*return la fin du file si atteint*/
	ftell(a):/*return pos curseur*/
	
	/*
	fseek(nom_fichier;long offset(nb_octect,int whence)):
	whence = SEEK_SET(debut)
	whence = SEEK_CUR(inititiale)
	whence = SEEK_END(fin)
	*/
}