#include "main.h"
//main

int main(void)
{
	struct ordonnanceur Ordonnanceur;
	int i,nbProcessus;
	int k;
	for (k=0;k<100;k++)
	{
		sprintf(Ordonnanceur.fileProcessus[0].nom,"%s","");
		Ordonnanceur.fileProcessus[k].duree=0;
		Ordonnanceur.fileProcessus[k].priorite=0;
	}
	printf("Entrer le nombre de processus à ajouter\n");
	scanf("%d",&nbProcessus);
	for (i=0;i<nbProcessus;i++)
	{
		ajout_activite(&(Ordonnanceur));
	}
	run(&(Ordonnanceur));
	return 0;
}

