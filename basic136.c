#include<stdio.h>
void addOne(int*ptr){
(*ptr)++;
}
int main()
{

    int* p,i=10;
    p=&i;
    addOne(p);
    printf("%d",*p);
    return 0;
}
