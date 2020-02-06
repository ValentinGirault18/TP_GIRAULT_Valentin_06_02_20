#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choixDeplacement1=0; 

int main ()
{

printf("Vous avez deux choix, vous rendre dans la foret ou dans les plaines.\n");

while (choixDeplacement1!=1 && choixDeplacement1!=2)
{
	printf("Tape 1 pour la foret / Tape 2 pour les plaines. \n"); 
	scanf ("%d", &choixDeplacement1); 
	printf ("Votre choix : %d \n", choixDeplacement1); 

	if (choixDeplacement1==1)
	{
		printf ("Vous entrez dans la foret. \n");
	}
	if (choixDeplacement1==2)
	{
		printf ("Vous entrez dans les plaines. \n");
	}
	else 
	{
	printf ("Ce choix n'existe pas...\n");	
	}

}

return 0;
}