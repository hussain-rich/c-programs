#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter a:");
    scanf("%lf",&a);
    printf("Enter b:");
    scanf("%lf",&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("After swaping a is:%.2lf",a);
    printf("\nAfter swaping b is:%.2lf",b);
    return 0;
}
