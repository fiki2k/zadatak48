// Program ce decimalni broj pretvorit u oktalni pomocu funkcije.

#include <stdio.h>
#include <math.h>
/* Ova funkcija pretvara oktalni u decimalni broj.
 */
 
long oktalniUdecimalni(int oktalni)
{
    int decimalni = 0, temp = 0;

    while(oktalni != 0)
    {
        decimalni = decimalni + (oktalni%10) * pow(8,temp);
        temp++;
        oktalni = oktalni / 10;
    }

    return decimalni;
}
int main()
{
    int oktalni;

    printf("Unesi oktalni broj: ");
    scanf("%d", &oktalni);

    printf("Decimalni broj je: %ld", oktalniUdecimalni(oktalni));

    return 0;
}
