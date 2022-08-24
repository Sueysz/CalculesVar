#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 0 ,nombre1 = 0, nombre2 = 0;/* j'ai cree 3 variable dont une qui representerait mon resultat */
    printf ("quel est le nombre 1 ?\n");
    scanf ("%d",&nombre1);/* pour demander à l'utilisateur une valeur */
    printf ("et le nombre 2 ?\n");
    scanf ("%d",&nombre2);

    result = nombre1+nombre2; /* le calcul */
    printf ("%d+%d=%d\n",nombre1,nombre2,result);/* je marque "%d" pour afficher un nombre entier et si je voulais un nombre decimal ca serais "%ls"*/
    return 0;
}
