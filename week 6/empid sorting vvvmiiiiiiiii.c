#include<stdio.h>
struct empid{

  char name[20];
  float a;
};
void input(struct empid *p);
void display(struct empid *q);
void sort(struct empid *r);
int main()
{
    int i;
 struct empid s[10];
 for(i=0;i<10;i++){
  printf("plzz enter %d data\n",i+1);
 input(&s[i]);
 }fflush(stdin);
 sort(s);
 fflush(stdin);
for(i=0;i<10;i++){
  printf("your %d data is:-\n",i+1);
 display(&s[i]);
 }
 sort(s);
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
 void sort(struct empid *r)
 {
     int i,j;
     float t;
     char s[20];
     for(i=0;i<=10;i++)
     {
        for(j=i+1;j<10;j++)
        {
            if(((r+i)->a)>((r+j)->a))
            {
                t=((r+i)->a);
                ((r+i)->a)=((r+j)->a);
                ((r+j)->a)=t;
                fflush(stdin);
                strcpy(s,((r+i)->name));
                strcpy(((r+i)->name),((r+j)->name));
                strcpy(((r+j)->name),s);

            }
        }
     }
 }
