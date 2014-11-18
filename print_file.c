#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
	if (1 > argc) {
		printf("Nombre de parametres insuffisants\n");
		return 1; 
	}
	FILE *f_in;
	int nb_ligne = 1; 
	int ligne = 0;
	int i = 0;
	int j = 0;
	int c;
	short entre_accolade = 0;
	int nb_div = 0;
	
	
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
  	char texte[nb_ligne][200];
	if (NULL == (f_in = fopen(argv[1],"r"))) {
		fprintf(stderr, "\nErreur: Impossible de lire %s\n",argv[1]);
		return(EXIT_FAILURE); 
	}
		while ((c = fgetc(f_in)) != EOF){
			if('\n' == c){
				texte[ligne][i] = '\0';
				ligne++;
				i = 0;
			}
			else{
				texte[ligne][i] = c;
			}
			
			i++;
		}
		
char div[nb_ligne][200];
for(ligne = 0 ; ligne < nb_ligne ; ligne ++){
	i = 0;
	while(texte[ligne][i] != 0){
		if(125 == texte[ligne][i]){		
		div[nb_div][i] = '\0';	
			nb_div++;
			printf("\n");
		}		
		div[nb_div][i] = texte[ligne][i];
		i++;
	}

}	
	
  // Fermeture des flots de donnees
  fclose(f_in);

  return(EXIT_SUCCESS);
}
                                                                                                   