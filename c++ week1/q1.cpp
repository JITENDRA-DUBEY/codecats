// jdg 2d array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,m,i,j;
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
  // for printing
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cout<<" "<<a[i][j];
    }cout<<"\n";
  }
}
