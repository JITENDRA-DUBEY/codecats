// print the desire sequence
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,d,k;
char s[1000];
printf("please enter achar string\n");
gets(s);
printf("plzz enter atleat how many times your char occour will be printed\n");
scanf("%d",&k);
for(i=0;s[i];i++)
{  d=0;
for(j=0;s[j];j++)
 {
 if(s[i]==s[j])
   d++;
 }//printf("%d",d);
 if(d>=k)

    printf("%c",s[i]);
 else
    printf("");
}
return 0;
}

