//jsg printf("sum of principal diagonal element)
// jdg 2d array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,m,i,j,s=0;
  cout<<"Enter the total row and column of a 2d array(matrix)\n";
  cin>>n>>m;
  int a[n][m];
  cout<<"Enter the element row wise\n";
  // for element of matrix;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cin>>a[i][j];
    }
  }
  // for printing sum of pri.diag el
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     if(i==j)
     {
         s=s+a[i][j];
     }

    }
  }
  cout<<"sum of pr.diagonal ele :-"<<s;
}
