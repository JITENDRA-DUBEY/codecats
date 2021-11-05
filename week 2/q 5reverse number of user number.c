//PROGRAM TO REVERSE A GIVEN NUMB
#include<stdio.h>
int main()
{
int on,n,m,d=0,i=1;
printf("plzz enter a number");
scanf("%d",&on);
n=on;
while(on!=0)
{
on=on/10;
d++;
}for(i;i<=d;i++)
{
m=n%10;
n=n/10;

printf("%d",m);}


return 0;
}
