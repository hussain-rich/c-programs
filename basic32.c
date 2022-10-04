#include<stdio.h>
int main()
{
    int i;
    double number,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter %d:",i);
        scanf("%lf",&number);
        if (number<0.0){
            continue;
        }
        sum+=number;
    }

    printf("sum=%.2lf",sum);
return 0;
}
