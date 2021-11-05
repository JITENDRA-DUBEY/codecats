//program to take any character and check it is char ,alpha ,spc
#include<stdio.h>
int main()
{
char ch;
 printf("enter a character");
 scanf("%c",&ch);
 if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf(" input character is Alphabetic number");
 else
    if(ch>='0'&&ch<='9')
    printf("input character is numeric");
    else
        printf("input character is special char");
 return 0;
}
