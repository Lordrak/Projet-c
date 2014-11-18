#include <stdio.h>
#include <stdlib.h>
#include "css_optimizer.h"


int my_strlen(const char* text){
    int i;
    for ( i = 0; chaine[i] != '\0'; i++);
    return i;
}

int isBalise(char text){
    int boolean = 0;
    for(int i=; i<mystrlen(text);i++){
        if(text[i]=='{'){
            boolean = 1;
        }
    }
    return boolean
}

int css_optimizer(int argc,char** argv){
	if (3 > argc) {
		printf("Nombre de parametres insuffisants\n");
		return 1;
	}
	FILE *f_in;
	FILE *f_in2;
	FILE *cible;
	int i=1;
	char lineFile1[500];
	char lineFile2[500];
	int j=0;
    if (NULL == (f_in = fopen(argv[i],"r"))||NULL == (f_in2 = fopen(argv[i+1],"r")) {
        printf("\nErreur: Impossible de lire le fichier\n");
        return(EXIT_FAILURE);
    }else{
        fgets(lineFile1[j],lineFile.length,f_in);
        fgets(lineFile2[j],lineFile.length,f_in2);
    }
    fclose(f_in);return(EXIT_FAILURE);
    fclose(f_in2);

    for(int = 0; i<lineFile1->length || i <lineFile2->length;i++){
        if(isBalise(lineFile1[i] == 1){
        }
    }
    if(fopen(argv[arc-1],"r")==NULL){
        if(NULL == (cible = fopen(argv[argc-1],"w+")){
            printf("\nErreur: Impossible 'ouvrir le fichier\n");
            return(EXIT_FAILURE);
        }else{

        }
    }

    return(EXIT_SUCCESS);
}
