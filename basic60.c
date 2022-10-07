#include<stdio.h>
int main()
{
    int base,exp;
    long double result=1.0;
    printf("Enter a base number:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&base);
    while(exp!=0){
        result*=base;
        --exp;
    }
    printf("answer=%.0lf",result);
    return 0;

}
