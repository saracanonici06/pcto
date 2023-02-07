#include <stdio.h>
int main()
{   float numero= -273.15;
    float a;
    
    printf ("inserire la temperatura\n");
    scanf("%f",&a);
    if (a<numero) { printf(" errore ");}
    else if (a==0) {printf(" errore ");}
    else {  float b= 1.8 * a +32;
    float c= a+273.15;
        printf("Fahrenheit: è uguale a:%f\n", b);
    
        printf("Kelvin: %f\n", c);
        }
}