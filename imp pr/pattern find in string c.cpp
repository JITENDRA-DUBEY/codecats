// jsg write a function which find given pattern in given string;
#include<stdio.h>
#include<string.h>
void patfn(char a[],char b[],int l);
int main()
{
	
	char s[100],t[10];
	int l;
	printf("plzz enter your string\n");
	fflush(stdin);
	scanf("%[^\n]s",s);
	printf("plzz enter your pattern which have max range 10\n");
	fflush(stdin);
	scanf("%[^\n]t",t);
	//find total char in pattern string
    l=strlen(t);
	patfn(s,t,l);
	return 0;
	
}
//logic fist we check first char of s is equal to fist char of t;
void patfn(char a[],char b[],int l)
{
	int i,j=0,k,count=1;

		for(i=0;a[i];i++)
		{
		    if(a[i]==b[0])//we check first char of a is equal to fist char of b;
			{
				for(j=1,k=i+1;b[j]&&a[k];j++,k++)// then we increase in k and check till we got null char in b
				{// this code check only when we got null in a string if pattern has extra 
				 //which is outofrange of range of main string then says no
					if(b[j]==a[k])
					{
						count++;// when we found equal char than incremnt count
					}
				}
			}
		
		  
				if(count>1)// this is condi if we find atleat one pattern same than break
			   break;
	}      if(count==l)// here we check count == pattern strn len excluding null char
		
			printf("yes patttern exist");
			else 
			printf("no pattern exist");

}
