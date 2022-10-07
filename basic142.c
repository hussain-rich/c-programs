#include<stdio.h>
int main()
{
    int n;
    double *data;
    printf("Enter the total number of element:");
    scanf("%d",&n);
    data=(double*)calloc(n,sizeof(double));
    if(data==NULL){

        printf("ERROR!!! memory not allocated");
        exit(0);
    }
    for(int i=0;i<n;i++){

        printf("Enter number%d",i+1);
        scanf("%lf",data+i);
    }
    for(int i=1;i<n;i++)
    {

        if(*data<*(data+i)){
        *data=*(data+i);
        }
    }
    printf("largest number=%.2lf",*data);
    free(data);
    return 0;
}
