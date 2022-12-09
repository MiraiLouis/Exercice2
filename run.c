#include "main.h"
//run


void run(struct ordonnanceur *pointeurOrdonnanceur)
{
	while (estVide(&(*pointeurOrdonnanceur))==1)
	{
		step(&(*pointeurOrdonnanceur));
	}
	printf("File vide\n");
}

