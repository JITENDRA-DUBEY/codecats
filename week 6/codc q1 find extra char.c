//Given two strings which are of lengths n and n+1.
//The second string contains the character of the first string, but there is one extra character.
 //Your task is to find the extra character in the second string.
 #include<stdio.h>
 #include<string.h>
int main()
{
int i,j,l,d=0;
char s[100],t[100];
char *p,*q;
p=s;
q=t;
printf("plzz enter firts string:-\n");
gets(s);
printf("plzz enter second string which contain all char of it have one extra char which is not in str1:-\n");
gets(t);
l=strlen(t);
for(i=0;i<=l-1;i++)
{
    for(j=i+1;j<=l-1;j++)
    {
        if(*(q+i)==*(q+j))
        {
        d++;
        break;}
    }if(d>0)
    break;
}
if(d>0)
{
printf(" extra char =%c",*(q+i));
}
else{
for(i=0;i<=l-1;i++)
{
  for(j=0;j<=l-2;j++)
  {
   if(*(q+i)==*(p+j))
     break;
  }if(j>l-2)
  {
  printf("extra char is=%c",*(q+i));
  break;
  }

}
}
return 0;
}
