#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a integer:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("sum=%d",sum);
    return 0;
}
