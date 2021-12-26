// to show the index number
#include<stdio.h>
int main()
{
int i,j,n,t,a[n];
printf("please enter size of array\n");
scanf("%d",&n);
printf("plzz enter array element in asscending order:-\n");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
printf("please enter the target value:\n");
scanf("%d",&t);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
 if(a[i]+a[j]==t)
 break;
}
if(a[i]+a[j]==t)
 break;
}
if(i<=n-1&&j<=n-1)
printf("[%d %d]",i,j);
else
printf("target is outof scope");
return 0;
}
