#include<stdio.h>;
int main()
{

    double n1,n2,n3;
    printf("Enter a three different number:");
    scanf("%lf %lf %lf",&n1,&n2,&n3);
    if(n1>=n2&&n1>=n3)
        printf("%.1lf is greater amoung all three...",n1);
    else if(n2>=n1&&n2>=n3)

        printf("%.1lf is greater amoung all three......",n2);
    else
            printf("%.1lf is greater amoung all three....",n3);
    return 0;
}
