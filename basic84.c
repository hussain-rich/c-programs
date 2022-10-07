#include<stdio.h>
int addNumbers(int a,int b);
int main()
{
    int n1,n2,sum;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    sum=addNumber(n1,n2);
    printf("sum=%d",sum);
    return 0;

}
int addNumber(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
