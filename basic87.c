#include<stdio.h>
void display();
int n=5;
int main()
{
    ++n;
    display();
    return 0;
}
void display()
{
    ++n;
    printf("n=%d",n);
}
