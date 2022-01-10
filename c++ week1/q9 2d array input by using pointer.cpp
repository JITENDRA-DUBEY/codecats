//jsg taking 2d array square matrix input by using function and pointer
#include<iostream>
#include<conio.h>
using namespace std;
void input(int *p,int n,int m);
void output(int *p,int n,int m);
int main()
{
  int n,m,i,j;
  cout<<"Enter the total row and column of a 2d array(matrix)\n";
  cin>>n>>m;
  int *arr[n][m];
  cout<<"Enter the element row wise\n";
 input((int*)arr,n,m);
 output((int*)arr,n,m);

}
void input(int *p,int n,int m){
    int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cin>>*((p+i*n) + j);
    }
  }
}

void output(int *p,int n,int m){
    int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cout<<" "<<*((p+i*n) + j);
    }
    cout<<"\n";
  }
}
