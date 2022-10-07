#include<stdio.h>
int main()
{
    int i,x[6],sum=0;
    printf("Enter 6 number:");
    for(i=0;i<6;i++)
    {
        sum+=*(x+i);
    }
    printf("sum=%d",sum);
    return 0;

}
