//date to day using switch case
#include<stdio.h>
int main()
{
 int d;
 printf("enter the date from 1-7 :");
 scanf("%i",&d);
 switch(d)
 {
 case 1:
    printf("MONDAY");
    break;
 case 2:
    printf("TUSEDAY");
    break;
 case 3:
    printf("WEDNESDAY");
    break;
 case 4:
    printf("THRUSDAY");
    break;
 case 5:
    printf("FRIDAY");
    break;
 case 6:
    printf("SATURDAY");
    break;
 case 7:
    printf("SUNDAY");
    break;
 default:
    printf("TRY AGAIN");
    }
      return 0;

}
