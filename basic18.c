#include<stdio.h>
int main()
{

    int divident,divisor,quotient,remainder;
    printf("Enter divident:");
    scanf("%d",&divident);
    printf("Enter divisor");
    scanf("%d",&divisor);
    quotient=divident/divisor;
    printf("quotient=%d",quotient);
    remainder=divident%divisor;
    printf("\nremainder=%d",remainder);
    return 0;
}
