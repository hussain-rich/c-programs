#include<stdio.h>
#include<conio.h>
#include<math.h>
int fm(int date,int month,int year){
       int fmonth,leap;
       if ((year%100==0)&&(year%400!=0))
 leap=0;
 else if (year%4==0)
 leap=1;
 else
 leap=0;
 fmonth=3+(2-leap)*((month+2)/(2*month))
 +(5*month+month/ 9) / 2;
 fmonth=fmonth % 7;
 return fmonth;
}
int day_of_week(int date, int month, int year) {
 int dayOfWeek;
 int YY=year%100;
 int century=year/100;
 printf("\nDate: %d/%d/%d \n",date,month,year);
 dayOfWeek = 1.25*YY+fm(date,month,year)+date- 2*(century%4);
 dayOfWeek=dayOfWeek%7;
 switch (dayOfWeek) {
 case 0:
 printf("weekday = saturday");
 break;
 case 1:
 printf("weekday = sunday");
 break;
 case 2:
 printf("weekday = monday");
 break;
 case 3:
 printf("weekday = tuesday");
 break;
 case 4:
 printf("weekday = wednesday");
 break;
 case 5:
 printf("weekday = thursday");
 break;
 case 6:
 printf("weekday = friday");
 break;
 default:
 printf("invalid data");
 }
 return 0;

       }
void main() {
 int date,month,year;
 printf("\nEnter the year ");
 scanf("%d",&year);
 printf("\nEnter the month ");
 scanf("%d",&month);
 printf("\nEnter the date ");
 scanf("%d",&date);
 day_of_week(date,month,year);
 getch();
}
