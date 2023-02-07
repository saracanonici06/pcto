#include <stdio.h>
int main()
{
    int a;
    int b;
    

    printf("scrivere due numeri\n");
    scanf("%d\n %d", &a, &b);
    if ( a%b==0) { printf ("è un multiplo");}
    else { printf ("non è un multiplo");}
}