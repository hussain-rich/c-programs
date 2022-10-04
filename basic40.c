#include<stdio.h>
int main(){
double n1,n2,n3;
printf("Enter three different number:");
scanf("%ld %lf %lf",&n1,&n2,&n3);
if(n1>=n2)
{
    if(n1>=n3)
        printf("%lf is the largest number",n1);
        else
        printf("%lf is the largest number",n3);
}
    else
        {
            if(n2>=n3)
                printf("%lf is largest number",n2);

            else
                printf("%lf is largest number",n3);
        }

    return 0;
}
