#include<stdio.h>
int main()
{
    int num,originalnum,remainder,result=0;
    printf("Enter a three digit integer:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0){
        remainder=originalnum%10;
        result+=remainder*remainder;
        originalnum/=10;

    }
    if(result==num)
        printf("%d is an armstrong number",num);
    else
        printf("%d is not an amstrong number",num);
    return 0;
}
