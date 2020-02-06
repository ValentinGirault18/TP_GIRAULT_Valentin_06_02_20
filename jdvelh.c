#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// struct Chapitre 
struct chapitre {
	char description[50]; 
	char gainOr[50];
	char gainPV[50];
	int tabID;
	
};



int main ()
{
int choixDeplacement1=0; 
int choixChangeChap=0;
int fin=0;
	
	
// Declaration du chapitre 1, 2 et 3	
	struct chapitre chapitre1;
	struct chapitre chapitre2;
	struct chapitre chapitre3;
    printf("\n \n" );
// specification chapitre 1	
    strcpy(chapitre1.description,"Les merveilles");
	strcpy(chapitre1.gainOr,"30");
	strcpy(chapitre1.gainPV,"100");
	chapitre1.tabID = 101; 
// print Chapitre 1 info 	
   printf( "Chapitre 1 description : %s\n", chapitre1.description);
   printf( "Chapitre 1 Gain Or : %s\n", chapitre1.gainOr);
   printf( "Chapitre 1 Gain PV : %s\n", chapitre1.gainPV);
   printf( "Chapitre 1 tabID : %d\n", chapitre1.tabID);
   printf("\n \n" );
   
   
 //--------------------------------------------------------------------------------------------//
 
 // specification chapitre 2	
   strcpy(chapitre2.description,"La realite");
   strcpy(chapitre2.gainOr,"50");
   strcpy(chapitre2.gainPV,"120");
   chapitre2.tabID = 102; 
// print Chapitre 2 info 	
   printf( "Chapitre 2 description : %s\n", chapitre2.description);
   printf( "Chapitre 2 Gain Or : %s\n", chapitre2.gainOr);
   printf( "Chapitre 2 Gain PV : %s\n", chapitre2.gainPV);
   printf( "Chapitre 2 tabID : %d\n", chapitre2.tabID);
   printf("\n \n" );  
   
   //--------------------------------------------------------------------------------------------//
 
 // specification chapitre 3	
   strcpy(chapitre3.description,"Le desespoir");
   strcpy(chapitre3.gainOr,"150");
   strcpy(chapitre3.gainPV,"150");
   chapitre3.tabID = 103; 
// print Chapitre 2 info 	
   printf( "Chapitre 3 description : %s\n", chapitre3.description);
   printf( "Chapitre 3 Gain Or : %s\n", chapitre3.gainOr);
   printf( "Chapitre 3 Gain PV : %s\n", chapitre3.gainPV);
   printf( "Chapitre 3 tabID : %d\n", chapitre3.tabID);
   printf("\n \n" );  
   
   
//--------------------------------------------------------------------------------------------//
int chapitre[3];
chapitre[0] = 1;
chapitre[1] = 2;
chapitre[2] = 3;


// Choix Deplacement 1
   printf(" Choisissez le chapitre dans lequel vous souhaite vous rendre.\n");

	while (fin !=1)
	{
		

		while (choixDeplacement1!=1 && choixDeplacement1!=2 && choixDeplacement1!=3)
		{
			printf("Tape 1 pour le chapitre 1 / Tape 2 pour le chapitre 2 / tape 3 pour le chapitre 3 \n"); 
			scanf ("%d", &choixDeplacement1); 
			printf ("Votre choix : %d \n ", choixDeplacement1); 

			if (choixDeplacement1==1)
			{
				printf ("Vous entrez dans le chapitre[%d] 'Les merveilles'. \n \n",chapitre[0]);
					

					
					while (choixChangeChap !=1 && choixChangeChap !=2)
					{	
					printf("souhaitez-vous changer de chapitre? \n 1.Oui \n 2.Non\n");
					scanf ("%d",&choixChangeChap);
					}
					
					if (choixChangeChap ==1)
					{
						printf ("Vous avez choisie de changer de chapitre \n");
						choixChangeChap =0;	
						choixDeplacement1=0;
					}
					if (choixChangeChap ==2)
					{
						printf ("Vous continuez votre aventure");
						
						fin==1; 
					}
					
					
					
			}
			if (choixDeplacement1==2)
			{
			printf ("Vous entrez dans le chapitre[%d] 'la realite'. \n \n",chapitre[0]);
				
				printf("souhaitez-vous changer de chapitre? \n 1.Oui \n 2.Non\n");
				scanf ("%d",&choixChangeChap);
				
					while (choixChangeChap !=1 && choixChangeChap !=2)
					{
						
					printf("souhaitez-vous changer de chapitre? \n 1.Oui \n 2.Non\n");
					scanf ("%d",&choixChangeChap);
					}
					if (choixChangeChap ==1){
						printf ("Vous avez choisie de changer de chapitre \n");
						choixChangeChap =0;
						choixDeplacement1=0;
						
					}
					if (choixChangeChap ==2){
						choixChangeChap =0;
					}
			}
			if (choixDeplacement1==3)
			{
				printf ("Vous entrez dans le chapitre[%d] 'le desespoir'. \n \n",chapitre[0]);
				
				printf("souhaitez-vous changer de chapitre? \n 1.Oui \n 2.Non \n");
				scanf ("%d",&choixChangeChap);
				
					while (choixChangeChap !=1 && choixChangeChap !=2)
					{
						
					printf("souhaitez-vous changer de chapitre? \n 1.Oui \n 2.Non \n");
					scanf ("%d",&choixChangeChap);
					}
					if (choixChangeChap ==1)
					{
						printf ("Vous avez choisie de changer de chapitre \n");
						choixChangeChap =0;
						choixDeplacement1=0;
					}
					if (choixChangeChap ==2)
					{
						choixChangeChap =0;
					}
			
				
			}	
		}
	}
return 0;
}
