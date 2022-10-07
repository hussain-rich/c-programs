#include<stdio.h>
int addNumber(int n);
int main(){
int num;
printf("Enter a positive integer:");
scanf("%d",&num);
printf("sum=%d",addNumber(num));
return 0;
}
int addNumber(int n){

if(n!=0)
    return n+addNumber(n-1);
else
    return n;
}
