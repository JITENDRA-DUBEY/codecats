#include<stdio.h>
int main()
{
   int i,n,max,min,secmax,secmin,j;

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
    }    printf("max ele is=%d\n",max);

    for(i=0;i<=n-1;i++)
    {
        if(a[i]<max)
        {    secmax=a[i];
             break;
        }
    }
            for(j=0;j<=n-1;j++)
            {   if(a[j]<max)
            {
              if(a[j]>secmax)
              secmax=a[j];
            }
        }
     printf("secm=%d\n",secmax);
    min=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(min>a[i])
        min=a[i];
    }printf("min ele is=%d\n",min);
      for(i=0;i<=n-1;i++)
    {
        if(a[i]>min)
        {    secmin=a[i];
             break;
        }
    }
     for(j=0;j<=n-1;j++)
            {   if(a[j]>min)
            {
              if(a[j]<secmin)
              secmin=a[j];
            }
        }
     printf("secmin=%d",secmin);


    return 0;
}

