#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

struct processus
{
	char nom[10];
	int duree;
	int priorite;	
};
struct ordonnanceur
{
	struct processus fileProcessus[100];// On considère un tableau de 100 processus
};

void ajout_activite(struct ordonnanceur *pointeurOrdonnanceur);
int estVide(struct ordonnanceur *pointeurOrdonnanceur);
void step(struct ordonnanceur *pointeurOrdonnanceur);
void run(struct ordonnanceur *pointeurOrdonnanceur);

