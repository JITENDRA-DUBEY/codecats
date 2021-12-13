// array elem sum
#include<stdio.h>
int main()
{
   int i,n,r,sum=0,sumep=0,sumop=0,sume=0,sumo=0;


    scanf("%d",&n);
     int a[n];
    printf("please enter the %d elemnts\n",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];

    }printf("sum=%d\n",sum);
     for(i=0;i<=n-1;i++)
    {
        if(i%2==0)
            sumep=sumep+a[i];
        else
            sumop=sumop+a[i];

    }printf("sumep=%d\n",sumep);
    printf("sumop=%d\n",sumop);
     for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
            sume=sume+a[i];
        else
            sumo=sumo+a[i];

    }printf("sume=%d\n",sume);
    printf("sumo=%d\n",sumo);

    return 0;

}
