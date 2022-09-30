#include<stdio.h>
int main()
{

    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number<0)
        printf("You entered %d\n",number);
    else
        printf("The if statement is easy...");
    return 0;
}
