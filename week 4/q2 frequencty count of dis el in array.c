// frquency count of every element
#include<stdio.h>
int main()
{
   int i,n,j,temp,d;

    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the %d elemnts\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
       //printf("%d",a[i]);
        {   d=0;
          for(j=0;j<=n-1;j++)
          {
              if(a[i]==a[j])
               {
                d++;
               }
          }printf("%d occurs at %d times\n",a[i],d);
          }


    }
    return 0;
}




