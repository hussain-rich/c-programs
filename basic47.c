#include<stdio.h>
int main()
{
    int n,i,sum=0;
    do{
        printf("Enter an integer:");
        scanf("%d",&n);
    }
    while(n<=0);

        for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}
