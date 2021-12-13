// find index of given target aur neareset value of index
#include<stdio.h>
int main()
{
   int i,n,j,k;

    printf("plzz enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("please enter the %d elemnts in asending order\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("plzz enter the target value whiles lies between input numbers:-\n");
    scanf("%d",&k);
    for(i=0;i<=n-1;i++)
    {
        if(k==a[i])
        {printf("index value of%d is %d",k,i);
        break;
        }
        else
            if(a[i]>k)
        {
            printf("index value of%d is %d",k,i);
            break ;
        }

    }
    return 0;
}
