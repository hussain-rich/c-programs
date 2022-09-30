#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("The size of int:%zu bytes",sizeof(intType));
    printf("\nThe size float: %zu bytes",sizeof(floatType));
    printf("\nThe size of double:%zu bytes",sizeof(doubleType));
    printf("\nThe size of:%zu bytes",sizeof(charType));
    return 0;
   }
