#include<stdio.h>
int main()
{

    int num,sum=0,count;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    for(count=1;count<=num;count++)
    {
        sum+=count;
    }
    printf("sum:%d",sum);
    return 0;
}
