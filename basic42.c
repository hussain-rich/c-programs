#include<stdio.h>
int main()
{
    double num;
    printf("Enter a number:");
    scanf("%lf",&num);
    if(num<=0.0)
    {
        if(num==0)
            printf("you entered 0");
        else
            printf("you entered a negative value..");
    }
    else
        printf("you entered a positive value");
    return 0;
}
