#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void ccio3( const char* in, const char* out){

	FILE* exo = fopen(in, "r");
	FILE* exo2 = fopen(out, "w");
	if(exo==NULL) {
		printf("Error\n");
	} else {

	char* test = (char*)malloc(sizeof(char)*100);
	int i=1;
	while(fgets(test,100,exo)!=NULL){
		fprintf(exo2, "%d: ", i);
		fwrite(test,sizeof(char),strlen(test),exo2);
		i++;
	}
}

	fclose(exo);
	fclose(exo2);
}


int main(int argc, char const *argv[])
{
	ccio3("save.txt","save2.txt");
}