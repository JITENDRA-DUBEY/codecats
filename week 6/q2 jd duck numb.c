//find duck number we know that 0 never be the first element of string and atleast one zero is present
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,l;
char s[1000];
gets(s);
l=strlen(s);
char *p=s;
 if(*p=='0'||*p=='-')
 {
printf("enter number is not a duck number:-\n");
}
else
  {
  for(i=1;i<=l-1;i++)
    {
     if(*(p+i)=='0'){
     printf("given number is duck number\n");
     break;
     }
    }if(i>l-1)
    printf("enter number is not a duck number");
  }
  return 0;
  }

