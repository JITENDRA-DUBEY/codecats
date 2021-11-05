//program to take input as a week number and print week day
#include<stdio.h>
int main()
{
    int weekdays;
    printf("enter weekday number");
    scanf("%d",&weekdays);
   switch(weekdays){
    case 1:printf("MONDAY"); break;
    case 2:printf("TUESDAY"); break;
    case 3:printf("WEDNESDAY"); break;
    case 4:printf("THRUSDAY"); break;
    case 5:printf("FRIDAY"); break;
    case 6:printf("SATURDAY"); break;
    case 7:printf("SUNDAY"); break;
   }

printf("invalid week number");
    return 0;

}
