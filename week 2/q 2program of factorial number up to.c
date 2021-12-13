#include<stdio.h>
int main()
{
	int m;
	 unsigned long long int fac=1;
	printf("enter a numb");
	scanf("%d",&m);
	for(m;m>=1;m--)
	{
	fac=fac*m;}
	
	printf("factorial  =%llu",fac);
	return 0;

}
