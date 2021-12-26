#include<stdio.h>
#include<string.h>
int main()
{
int i,j,d,k,n=0;
char s[1000],b[1000];
printf("please enter a char string\n");
gets(s);
printf("plzz enter atleast how many times your char occour will be printed\n");
fflush(stdin);
scanf("%d",&k);
for(i=0;s[i];i++)
{
    d=0;

    for(j=0;s[j];j++)
 {
 if(s[i]==s[j])
   d++;
 }//printf("%d",d);
 if(d>=k){
    b[n]=s[i];
    n++;
 }
}
b[n]='\0';
printf("%s",b);
return 0;
}
