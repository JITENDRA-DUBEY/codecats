#include<stdio.h>
void main(){ int n,k;
printf("plzz enter the size of an array anf the value of k");
scanf("%d%d",&n,&k);
int a[n],b[n],i,r,m;
int *p=a,*q=b;
printf("Enter element in array \n");
for(i=0;i<n;i++){
    scanf("%d",(p+i));
}
if(k%n==0)
{
  for(i=0;i<n;i++){
printf("%d",*(p+i));
}
}
 else
{
    if(k%n>0)
    {
    r=k%n;
for(i=0;i<r;i++)
{
*(q+i)=*(p+n-r+i);
}
for(i=r;i<n;i++){
  *(q+i)=*(p+i-r);
}
for(i=0;i<n;i++){
printf("%d",*(q+i));
}
    }
    else{
         r=k%n;
         m=r+n;
         for(i=0;i<m;i++)
     {
     *(q+i)=*(p+n-m+i);
     }
     for(i=m;i<n;i++){
     *(q+i)=*(p+i-m);
     }
     for(i=0;i<n;i++){
     printf("%d",*(q+i));
      }
        }
}
return 0;
}
