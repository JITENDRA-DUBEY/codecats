#include<stdio.h>
int main(){
	int a;
	printf("plzz enter a numb");
	scanf("%d",&a);
	(a&1)?printf("odd"):printf("even");
	getch();
	return 0;
}
