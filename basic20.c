#include<stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;
    printf("size of int:%zu bytes",sizeof(a));
    printf("\nsize of long:%zu bytes",sizeof(b));
    printf("\nsize of long long:%zu bytes",sizeof(c));
    printf("\nsize of double:%zu bytes",sizeof(d));
    printf("\nsize of long double:%zu bytes",sizeof(e));
    return 0;
}
