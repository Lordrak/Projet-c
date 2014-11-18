#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	if (1 > argc) {
		printf("Nombre de parametres insuffisants\n");
		return 1;
	}
	FILE *f_in;
	FILE *random;
	random = fopen("random.css","w");
	int nb_ligne = 1;
	int ligne = 0;
	int i = 0;
	int c;
	if (NULL == (f_in = fopen(argv[1],"r"))) {
		fprintf(stderr, "\nErreur: Impossible de lire %s\n",argv[1]);
		return(EXIT_FAILURE);
	}

	while ((c = fgetc(f_in)) != EOF){
		if('\n' == c){
			nb_ligne++;
		}
	}
	 fclose(f_in);
    char textec[nb_ligne][200];
  	char texte[nb_ligne][200];
	if (NULL == (f_in = fopen(argv[1],"r"))) {
		fprintf(stderr, "\nErreur: Impossible de lire %s\n",argv[1]);
		return(EXIT_FAILURE);
	}
		while ((c = fgetc(f_in)) != EOF){
			if('\n' == c){
				texte[ligne][i] = '\0';
				textec[ligne][i] = texte[ligne][i];
				ligne++;
				i = 0;
			}
			else{
				texte[ligne][i] = c;
			}
			i++;
		}

for(i = 0; i < nb_ligne ; i++){
        fputs(textec[i] ,random);
        printf(" %s \n",textec[i] );
}
  // Fermeture des flots de donnees
  fclose(f_in);

  return(EXIT_SUCCESS);
	}
