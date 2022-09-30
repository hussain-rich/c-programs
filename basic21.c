#include<stdio.h>
int main()
{
    double first,second,temp;
    printf("Enter the first number:");
    scanf("%lf",&first);
    printf("Enter second number:");
    scanf("%lf",&second);
    temp=first;
    first=second;
    second=temp;
    printf("After swaping first number is :%.2lf",first);
    printf("\nAfter swaping second number is:%.2lf",second);
    return 0;
}
