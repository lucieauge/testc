#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int age = 0;
    scanf("%d", &age);

    if (age >= 18)
    {
      printf ("Vous etes majeur !\n");
    }

    else (age >= 60)
    {
        printf ("La retraite c'est bien aussi ! \n");
    }

    return 0;
}
