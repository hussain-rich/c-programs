#include<stdio.h>
int main()
{

    int number1,number2;
    printf("Enter two integer:");
    scanf("%d%d",&number1,&number2);
    if(number1>=number2){
      if(number1==number2)
            printf("Result:%d=%d",number1,number2);
      else{
        printf("Result:%d>%d",number1,number2);
    }}
    else
        printf("Result:%d<%d",number1,number2);
    return 0;

}
