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

    else (age<18)
    {
        printf ("Vous etes encore un bebe ! \n");
    }

    return 0;
}
