#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a positive integer:");
    scanf("%d",&num);
    printf("factor of %d are:",num);
    for(i=1;i<=num;i++)
    {
        if(num%1==0)
        {
            printf("%d",i);
        }
    }
    return 0;
}
