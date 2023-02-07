#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e = b - a ;
    int f = c - b;
    printf ("scrivere tre numeri\n");
    scanf("%d\n %d\n %d", &a, &b, &c);
    if (e == f){
        printf(" no sono una successione aritmetica");
    }
    else { printf ("si  sono una successione aritmetica");}


}