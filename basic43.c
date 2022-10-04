#include<stdio.h>
int main()
{
    double num;
    printf("Enter a number:");
    scanf("%lf",&num);
    if(num>0)
        printf("you entered a positive number..");
    else if(num<0)
        printf("you entered a negative value....");
    else
        printf("you entered 0");
    return 0;
}
