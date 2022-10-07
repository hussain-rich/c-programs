#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long int fact=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("!!ERROR..factoriial number doesnot exist negative number.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            fact*=i;
        }
        printf("Factorial of %d is %llu",n,fact);
        }
        return 0;
}
