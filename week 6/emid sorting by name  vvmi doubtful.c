#include<stdio.h>
#include<string.h>
// sorting in acending order of empid name character wise;
struct empid{

  char name[20];
  float a;
};
void input(struct empid *p);
void display(struct empid *q);
void sort(struct empid *r,int );
int strl(char e[]);
int main()
{
    int i,n;
    printf("plzz enter total student\n");
    scanf("%d",&n);
 struct empid s[n];
 for(i=0;i<n;i++){
  printf("plzz enter %d data\n",i+1);
 input(&s[i]);
 }fflush(stdin);
 sort(s,n);
 fflush(stdin);
for(i=0;i<n;i++){
  printf("your %d data is:-\n",i+1);
 display(&s[i]);
 }
 //sort(s);
 return 0;
}
 void input(struct empid *p)
 {  fflush(stdin);
   printf("plzz enter your name\n");
   fflush(stdin);
   gets(p->name);
   printf("plzz enter your salaray\n");
   fflush(stdin);
   scanf("%f",&(p->a));
 }
 void display(struct empid *q)
 {
   printf("name:-%s\n",q->name);
   printf("salary:-%0.2f\n",(q->a));

 }
 int strl(char e[])
 {
     int i=0;
     while(e[i])
     {
         i++;
     }
     return i;
 }
 void sort(struct empid *r,int n)
 {
     int i,j;
     float t;
     char s[20];
     for(i=0;i<=n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(strl((r+i)->name)>strl((r+j)->name))
            {   printf("else if");
                fflush(stdin);
                strcpy(s,((r+i)->name));
                strcpy(((r+i)->name),((r+j)->name));
                strcpy(((r+j)->name),s);
                t=((r+i)->a);
                ((r+i)->a)=((r+j)->a);
                ((r+j)->a)=t;


            }
            else
            {   printf("else");
                if(strcmp(((r+i)->name),((r+j)->name))>0)
                {
                   fflush(stdin);
                strcpy(s,((r+i)->name));
                strcpy(((r+i)->name),((r+j)->name));
                strcpy(((r+j)->name),s);
                t=((r+i)->a);
                ((r+i)->a)=((r+j)->a);
                ((r+j)->a)=t;

                }
            }
        }
     }
 }
