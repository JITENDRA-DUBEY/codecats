// jai shree ganeshay
//phone book project;
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
static int count =0;
struct phone
{
    char name[30];
    char a[20];
};
void display(struct phone *p);
void save(struct phone *q);
void search(struct phone *p);
void dlt(struct phone *p);
 struct phone ph[100];
   struct phone *p;

 int main()
{  p=&ph;
    int k,m;
     while(1)
     {
        system("cls");
        printf("      PHONE BOOK         \n ");
        printf("******************************************\n");
        printf("1.SAVE CONTACT DETAILS:-\n");
        printf("2.DISPLAY YOUR CONTACT:-\n");
        printf("3.SEARCHING CONTACT:-\n");
        printf("4.DELETE CONTACT:-\n");
        printf("5.EXIT:-\n");
        printf("******************************************\n");
        printf("plzz enter your choice:-\n");
        scanf("%d",&k);
        printf("******************************************\n");
        switch(k)
        {
        case 1:
             {char chh;
              int i;
              for(i=count;i<=100;i++)
               {
                save(&ph[i]);
                count++;
                fflush(stdin);
                scanf("%c",&chh);
                if(chh!='y')
                 {

                  break;

                  }
                }
             }
            break;
         case 2:
              printf("Total contacts=%d\n",count);
            {    int i;

                for(i=0;i<count;i++)
               {
                printf("Data of %d person is :-\n",i+1);
                display(&ph[i]);
                }
            }printf("*************************************\n");
             break;
         case 3:
            search(&ph);
              break;
        case 4:
             dlt(&ph);
              break;
          case 5:
          printf("thanku for using my application\n");
             exit(1);
        }


            printf("plzz enter any key for main menu\n");

            getch();
     }

      return 0;
}


void save(struct phone *q )
{        int j;

        printf("plzz enter the data of  person\n");
        printf("plzz enter name :\n");
        fflush(stdin);
        gets(q->name);
        fflush(stdin);
        printf("plzz enter your phone number\n");
        fflush(stdin);
        scanf("%s",q->a);
        printf("do you to want to save more than press y or n\n");

}
void display(struct phone *p)
{
       printf("Name:- %s\n",p->name);
       printf("Moblie numer:- %s\n",p->a);

}
void search(struct phone *p)
{   int s,sn;
    printf("plzz enter the serial number \n");
    fflush(stdin);
    scanf("%d",&s);
    sn=s-1;
     if(sn<count)
    {
    display(&p[sn]);
    }
    else
        printf("THIS CONTACT  NOT FOUND\n");
}
void dlt(struct phone *p)
{
     int i,sn,s;
    printf("plzz enter the serial number which u want to delete \n");
    fflush(stdin);
    scanf("%d",&s);
    sn=s-1;
     if(sn<=count&&count>0)
    {
       for(i=sn;i<count-1;i++)
       {
           ph[i]=ph[i+1];
       }count--;
    }
    else
        printf("THIS CONTACT  NOT EXIST\n");

}
