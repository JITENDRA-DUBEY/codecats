#include<stdio.h>
int main()
{
	float a,b;
	printf("enter two number");
	scanf("%f %f",&a,&b);
	
	//(a-b>0)
	(a>b)?printf(" %f is greater ",a):printf(" %f is greater",b);
	return 0;
	
	
}
