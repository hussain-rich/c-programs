#include<stdio.h>
int main()
{
    double base,exp,result;
    printf("Enter a base number:");
    scanf("%lf",&base);
    printf("Enter a exponential:");
    scanf("%lf",&exp);
    result=pow(base,exp);
    printf("%.1lf ^ %.1lf=%.2lf",base,exp,result);
    return 0;

}
