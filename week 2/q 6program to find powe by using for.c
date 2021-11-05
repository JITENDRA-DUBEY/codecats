//program to find powe by
#include<stdio.h>
int main(){
int b,e ,i=1;
long long p=1;
printf("plzz enter base");
scanf("%d",&b);
printf("plzz enter exponent");
scanf("%d",&e);
for(i;i<=e;i++)
{
    p=p*b;
}
printf("%d^%d=%lld",b,e,p);
return 0;
}
