#include<stdio.h>
int main()
{
	int m,fac=1;
	printf("enter a numb");
	scanf("%d",&m);
	for(m;m>=1;m--)
	{
	fac=fac*m;}
	
	printf("factorial  =%d",fac);
	return 0;

}
