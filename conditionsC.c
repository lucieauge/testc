#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    	int age = 0; // On initialise la variable à 0

	printf("Quel age avez-vous ?");
	scanf("%d", &age); // On demande d'enter l'age avec scanf
	
	if (age >= 18)
    {
      printf ("Vous etes majeur !\n");
    }

    else (age < 18)
    {
        printf ("Ah ! Malheureusement vous êtes mineur ! \n");
    }

    return 0;
}
