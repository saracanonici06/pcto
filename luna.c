#include <stdio.h>
int main()
{   int a;


    printf("inserire il proprio anno di nascita\n");
    scanf("%d", &a);
    if (a == 1969) {
        printf("sei nato nello stesso anno del primo atterraggio sulla luna");}
    else if (a < 1969) {       int b= 1969 - a;
     printf("sei nato prima del primo atterraggio sulla luna di %d", b);
    }
    else if (a > 1969) { int c= a - 1969;
    printf(" sei nato dopo il primo atterraggio sulla luna di anni\n %d", c);
    
    }
    
}