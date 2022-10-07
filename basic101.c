#include<stdio.h>
const int city=2;
const int week=7;
int main()
{
    int temperatured[city][week];
    for(int i=0;i<city;i++)
    {

        for(int j=0;j<week;j++){
            printf("city %d,day %d:",i+1,j+1);
            scanf("%d",&temperature[i][j]);

        }

    }
    printf("\n Displaywing value:\n\n");
    for(int i=0;i<city;i++){
        for(int j=0;j<week;j++){
            printf("city %d ,day%d=%d\n",i+1,j+1,temperature[i][j]);
        }
    }
    return 0;
}
