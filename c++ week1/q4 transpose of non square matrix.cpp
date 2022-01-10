// jdg 2d array transpose of square matrix
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,m,i,j,k;
  cout<<"Enter the total row and column of a 2d array( square matrix)\n";
  cin>>n>>m;
  int a[n][m],b[m][n];
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
  cout<<"matrix form :\n";
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++,k--)
    {
            b[i][j]=a[j][i];

     cout<<b[i][j]<<" ";
    }cout<<"\n";
  }
}
