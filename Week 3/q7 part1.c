#include<stdio.h>
int main()
{
   int i,n,max,min;

    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the %d elemnts\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    } max=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("max ele is=%d\n",max);
    min=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(min>a[i])
        max=a[i];
    }printf("min ele is=%d",min);
    return 0;
}

