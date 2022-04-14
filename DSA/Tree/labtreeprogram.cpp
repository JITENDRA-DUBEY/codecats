/* JSG Binary Tree with PostOrder 
1.first create a Queue by using ll ,ll data contain the address of tree nodes;.
2.create a class tree/*/
#include<iostream>
#include<conio.h>
using namespace std;
class Node//Tree Node
{
    public:
    Node*lchild;
    int data;Node*rchild;
    Node(){data=0;lchild=rchild=NULL;}
    
};
class nodeQ// this is linked list node which store the adress of tree nodes
{
    public:
    Node* data;
    nodeQ*next;
    nodeQ(){data=NULL;next=NULL;}
    //nodeQ(nodeQ** data){this->data=data;next=NULL;}
};

class Queue
{
   public:
   nodeQ*front,*rear;
   Node*data;
   Queue(){front=rear=NULL;}  
   void enQueue(Node*data);
   Node* deQueue();
   int isEmpty();
};
void Queue::enQueue(Node* data)//insertion from rare
{
    nodeQ*t=new nodeQ();
    t->data=data;
    if(front==NULL)
    {  
        front=rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }
}
Node* Queue::deQueue()
{
    Node* x=NULL;
   if(front==NULL)
   return x;
   nodeQ*temp=front;
   x=front->data;
   front=front->next;
   delete temp;
   return x;
}
int Queue::isEmpty()
{
    if(front==NULL)
    return 1;
    else 
    return 0;
}
class Tree
{
    public:
    Node*root;
    Tree(){root=NULL;}
    void create();
    void postorder(Node*p);
    void itrpostorder(Node*p);
};
void Tree::create()
{
    Node*p,*t;  int x;
     Queue q; // object of queue 
    cout<<"Enter the root data "<<endl;
    cin>>x;
    root=new Node();
    root->data=x;
    q.enQueue(root);
    while(!(q.isEmpty()))
    {
        p=q.deQueue();
        cout<<"enter the value of left node of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node();
            t->data=x;
            p->lchild=t;
            q.enQueue(t);
        }
         cout<<"enter the value of ryt node of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new Node();
            t->data=x;
            p->rchild=t;
            q.enQueue(t);
        }
    }


}

void Tree::postorder(Node*p)
{
    if(p!=NULL)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
class stack
{
    public:
    nodeQ*top;
    stack(){top=NULL;}
    void push(Node*data);
    Node*pop();
    int isEmpty();
};
void stack::push(Node*data)
{
    nodeQ*t=new nodeQ();
    // insertion always before first(top) node;
              t->data=data;
              t->next=top;
              top=t;
}
Node* stack::pop()
{
    Node* x=NULL;
    if(top==NULL){return NULL;}
    else
    {
        nodeQ*temp=top;
        x=top->data;
        top=top->next;
        delete temp;
    }
    return x;
}
int stack :: isEmpty()
{
    if(top==NULL){return 1;}
    else 
    return 0;
}

void Tree::itrpostorder(Node*p)
{
    stack st;
     long int x;
    while(p!=NULL||!(st.isEmpty()))
    {
        if(p!=NULL)
        {
           
            st.push(p);
             p=p->lchild;
        }
        else{
            x=(long int)st.pop();
            if(x>0)
            {   
                st.push((Node*)(-x));
                p=((Node*)x)->rchild;
            }
            else{
                  p=(Node*)(-x);
              cout<<p->data <<" ";
                p=NULL;
        }
    }
}
}


int main()
{
   
     Tree t;
     t.create();
     cout<<"\nPostorder Travesal of Tree : "<<endl;
     t.postorder(t.root);
     cout<<"\nItr Postorder Travesal of Tree : "<<endl;
     t.itrpostorder(t.root);

}
