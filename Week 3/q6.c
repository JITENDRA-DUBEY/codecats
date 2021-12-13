#include<stdio.h>
int main()
{
   int i,n,r,d=0;

    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the %d elemnts\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("plzz enter a int number\n");
    scanf("%d",&r);
    for(i=0;i<=n-1;i++)
    {
        if(r==a[i])
            d++;
    }printf("%d is occurs at %d times",r,d);
    return 0;
}
