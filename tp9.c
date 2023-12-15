#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void* mymalloc(size_t sz){
	int* a = malloc(sizeof(sz));
	if (a == NULL){
		fprintf(stderr, "erreur");
		exit(1);
	}else{
		return *malloc(sizeof(sz));
	}
}
int main(int argc, char const *argv[])
{
	
	
}