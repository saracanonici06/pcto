#include <stdio.h>
int main()
{
    int a;
    int numero=18;

    printf ("quanti anni ha l'utente?\n");
    scanf("%d", &a);
    if (a>18) { printf("l'utente è maggiorenne\n");}
    else if (a==18){printf("l'utente è maggiorenne\n");}
    else {printf("l'utente non è maggiorenne\n");}
}