//jsg program to check matrix is symmetric or not#include<iostream>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int n,m,i,j,k,d=0;
  cout<<"Enter the total row and column of a 2d array( square matrix)\n";
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
    for(j=0;j<m;j++,k--)
    {
            if(a[i][j]==a[j][i])
            {
                d++;
            }

    }
  }(d==n*m)?cout<<"symmetric":cout<<"not symmetric";
}

