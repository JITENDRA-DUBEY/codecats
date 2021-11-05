//write a program to display n natural number and  sum n natural numbers
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the last term ");
	scanf("%d",&n);
	printf("the first %d natural number is\n",n);
	while(i<=n)
	{
		printf("%d\t",i);
		sum=sum+i;
		i++;
	}
	printf("\n");
	printf("The sum of natural number up to %d is %d",n,sum);
	return 0;

}
