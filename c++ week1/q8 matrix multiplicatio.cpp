//q8 matrix multiplication
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,m,i,j;
  cout<<"Enter the total row and column of a 2d array(matrix)\n";
  cin>>n>>m;
  int a[n][m],b[n][m];
  cout<<"Enter the element of first matrix row wise\n";
  // for element of matrix;
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cin>>a[i][j];
    }
  }
  cout<<"Enter the element of second matrix row wise\n";
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     cin>>b[i][j];
    }
  }
  // for printing
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {    int s=0;
        for(int k=0;k<n;k++)
        {       s=s+a[i][k]*b[k][j];

        } cout<<s<<" ";

    }cout<<"\n";
  }
}
