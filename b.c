#include <stdio.h>
int main()
{
    int a;
    int b;

    printf ("inserire due numeri\n");
    scanf("%d\n %d", &a, &b);
    printf (" a è diventato: %d\n", a);
    printf("b è diventato: %d\n", b);

    if( a > b ) 
    { printf("a è maggiore di b\n");}

    else if ( a == b) 
    { printf ("a è uguale a b\n");}

    else if( a < b )    
    { printf("a è minore di b\n");}
}