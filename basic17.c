#include<stdio.h>
int main()
{
    int a=5,b=5,c=10,result;
    result = (a==b)&&(c>b);
    printf("(a==b)&&(a>c) is %d",result);
    result=(a==b)&&(c<b);
    printf("\n(a==b)&&(c<b) is %d",result);
    result=(a==b)||(c<b);
    printf("\n(a==b)||(c<b) is %d",result);
    result=(a!=b)||(c<b);
    printf("\na!=b)||(c<b) is %d",result);
    result=!(a!=b);
    printf("\n!(a!=b) is %d",result);
    result=!(a==b);
    printf("\n!(a==b) is %d",result);
    return 0;
}
