#include<stdio.h>
int main()
{
    int low,high,number,originalnumber,rem,count=0;
    double result=0.0;
    printf("Enter two number:");
    scanf("%d %d",&low,&high);
    printf("armstrong number between %d and %d are:",low,high);
    if(high<low)
    {

        high+=low;
        low=high-low;
        high-=low;
    }
    for(number=low+1;number<high;++number)
    {
        originalnumber=number;
        while(originalnumber!=0){
            originalnumber/=10;
            ++count;
        }
        originalnumber=number;
        while(originalnumber!=0){
            rem=originalnumber%10;
            result+=pow(rem,count);
            originalnumber/=10;
        }
        if((int)result==number){
            printf("%d",number);
        }
        count=0;
        result=0;
    }
    return 0;
}
