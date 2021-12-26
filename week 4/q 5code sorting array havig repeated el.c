//sorting of array having repetetd digit
#include<stdio.h>
int main()
{
int i,j,n,t,temp;
printf("plzz enter array size:-\n");
scanf("%d",&n);
int a[n];
printf("plzz enter the array element:-\n");
for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
   }
  for(i=0;i<=n-1;i++)
{
  for(j=i+1;j<=n-1;j++)
  {
     if(a[i]>a[j])
     {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;

     }
  }
}
for(i=0;i<=n-1;i++)
{
  printf("%d",a[i]);
}
return 0;
}
