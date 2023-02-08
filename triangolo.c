#include <stdio.h>
int main()
{   int a;
    int b;
    int c;
    printf ("inserire tre numeri per stabilire se possono essere i lati di un triangolo\n");
    scanf ("%d\n %d\n %d", &a, &b, &c);
    if (a+b>c && c+b>a && a+c>b) 
    {
        printf("  possono formare un triangolo\n");
        if (a == b && b == c){ printf("il triangolo è equilatero");}
        else if (a == b && c != a)   { printf("il triangolo è isoscele");}
        else if (b == c && b != a) { printf("il triangolo è isoscele");}
        else if (c == a && c != b) { printf("il triangolo è isoscele");}
        else {printf ("il triangolo è  scaleno");}
    }
    
    else {printf ("non possono formare un triangolo");}
}