#include<stdio.h>
int main()
{
    int n1,n2,gcd,lcm,i;
    printf("Enter two integer:");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("The lcm of two number is %d",lcm);
    return 0;
}
