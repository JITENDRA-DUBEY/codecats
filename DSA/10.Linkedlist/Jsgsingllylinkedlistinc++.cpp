//JSG
//note insertlast function only work when your list is empty 
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int menu();
class Node
{
    public:
    int data;
    Node*next;
    Node()// this is constructor
    {
        data=0;
        next=NULL;
    }
    Node(int data)// this is param. constructor
    {
        this->data=data;
        this-> next=NULL;
    }

};
class Linkedlist
{
  public : Node*first,*last=NULL;
  Linkedlist(){first=NULL;}// for assinging head pointer with null
  void create(int arr[],int n);
  void display();
  void reccPrint(Node *p); 
  void reccrevPrint(Node *p);
  void insertLast(int data);
  void insertFirst(int data);
  int countNode(Node*p);
  int sumofNoderec(Node*p);
  int maxelerec(Node*p);
  int keymtohsearch(Node*p,int key);
};
void Linkedlist :: create(int arr[],int n)
{
  Node*last=NULL;
  Node*p=first;
  Node*t=new Node(arr[0]);
  last=t;first=t;
  int i;
  for(i=1;i<n;i++)
  {
    Node*t=new Node(arr[i]);
    last->next=t;
    last=t;
  }
}
void Linkedlist :: display()
{
   Node*p=first;
   cout<<"\nYour List : ";
   if(first==NULL)
   {cout<<"\nList is Empty";
     return;
   }
   while(p!=NULL)
   {
       cout<<"\nElement : "<<p->data;
       p=p->next;
   }
   
}
void Linkedlist :: reccPrint(Node*p)
{
 
   if(p!=NULL)
   {   
       cout<<"\nElement : "<<p->data;
       reccPrint(p->next);

   }
} 
void Linkedlist :: reccrevPrint(Node*p)
{
   if(p!=NULL)
   {  
       reccrevPrint(p->next);
       cout<<"\nElement : "<<p->data;
       
   }
} 
void Linkedlist::insertLast(int data)
{
      Node*t=new Node(data);
      if(first==NULL)//there is no Node
      {
          first=last=t;
      }
      else{
          last->next=t;
          last=t;
      }//this works only when our listy is empty or we dont use create function or insert first;
}
void Linkedlist::insertFirst(int data)
{
      Node*t=new Node(data);
      if(first==NULL)//there is no Node
      {
          first=t;
      }
      else{
           t->next=first;
          first=t;
      }
}
int  Linkedlist::countNode(Node *p)
{
    int x=0;
    while(p!=NULL){x++;p=p->next;}
    return x;

}
int  Linkedlist::sumofNoderec(Node *p)
{
   if(p==NULL)
   return 0;
   return (p->data)+sumofNoderec(p->next);

}
int  Linkedlist::maxelerec(Node *p)
{
   static int x=-65536;
   if(p==NULL)
   return x;
   else{
       if(p->data>x){
           x=p->data;
           maxelerec(p->next);
       }
   }return x;
}
int Linkedlist::keymtohsearch(Node*p,int key)
{
    Node*q=NULL;
    int x=-1;
    if(p==NULL)
    {
        cout<<"\nList is Empty so we can't search";
        return x;
    }
    if(key==first->data)//this is first node not need to move head
    {
         x=first->data;
         return x;
    }
    while(p!=NULL)
    {
        if(p->data==key)
        {
           x=key;
           q->next=p->next;
           p->next=first;
           first=p;
           break;
        }
        else
        q=p;p=p->next;
    } return x;
}
int main()
{
  int key,x,arr[]={10,20,90,40,50};
   Linkedlist myList;
   while(1)
   {   system("CLS");
       switch (menu())
   {   
   case 1: myList.create(arr,5);
       break;
   case 2: myList.display();
           break;
    case 3: 
      cout<<"Plzz enter the value: ";
      cin>>x;
        myList.insertLast(x);
           break;       
    case 4: 
        if(myList.first==NULL)
      {cout<<"\nList is Empty"; }
      else
        {cout<<"\nYour List : ";
           myList.reccPrint(myList.first);
       } break; 
    case 5: if(myList.first==NULL)
      {cout<<"\nList is Empty"; }
      else
        {cout<<"\nYour List : ";
           myList.reccrevPrint(myList.first);
        } 
        break;  
        case 6:cout<<"Plzz enter the value: ";
           cin>>x;
            myList.insertFirst(x);
           break;
           case 7: 
           cout<<"\nNumber Of Nodes : "<<myList.countNode(myList.first);                    
               break;
          case 8: 
           cout<<"\nsum Of Nodes : "<<myList.sumofNoderec(myList.first);                    
               break;     
               case 9: 
           cout<<"\nMax Of Nodes : "<<myList.maxelerec(myList.first);                    
               break; 
         case 10: 
         cout<<"\nEnter ehich ele do you want search out : ";
            cin>>key;
           cout<<"\nKey Ele: "<<myList.keymtohsearch(myList.first,key);                    
               break;            
    case 11: exit(0);       
   default:
   cout<<"\nPlzz select right choice";
       break;
   }
     getch();
   }
}
int menu()
{
    int n;
   
  cout<<"\n1.For Creatingf LL with the help of array ";
  cout<<"\n2.For Display ";
  cout<<"\n3.For Creatingf LL wih the help of insert at last function  ";
  cout<<"\n4.For Display by using recuursion ";
  cout<<"\n5.For Display in Reverse order by using recuursion ";
  cout<<"\n6.For Creatingf LL wih the help of insert at First pos function  ";
  cout<<"\n7.For Number of Nodes ";
  cout<<"\n8.For Sum of Nodes ";
  cout<<"\n9.For Max of Nodes ";
  cout<<"\n10.For MovetoheadKeysearch : ";
  cout<<"\n11.for exit";
  cout<<"\nEnter Your Choice";
   cin>>n;
  return n;
}