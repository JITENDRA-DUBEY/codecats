// reverse an array
#include<stdio.h>
int main()
{
   int i,n,j,temp;

    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the %d elemnts\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    } printf("reverse array is:-\n");
    for(i=0;i<=n-1;i++)
    {   j=n-1-i;
        if(i<n/2)
        {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
        printf("%d\t",a[i]);
    }
    return 0;
}
