#include <stdio.h>
int main()
{
    int dvd, div, q=0, r, temp, dvd_copy;
    printf("Dividend: ");
    scanf("%d", &dvd);
    printf("Divisor: ");
    scanf("%d", &div);
    dvd_copy = dvd;
    while (dvd > div)
    {
        dvd = dvd - div;
        q++;
    }
    r = dvd_copy - q*div;
    printf("Quotient: %d\nRemainder: %d", q, r);
    return 0;
}    
