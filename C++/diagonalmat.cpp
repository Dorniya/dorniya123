#include<iostream>
using namespace std;
int main()
{
  int n,i,j,sl=0,sr=0,mat[n][n];
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>mat[i][j];
        if(i==j)
        {
          sl=sl+mat[i][j];
        }
      if(i+j==n-1)
      {
        sr=sr+mat[i][j];
      }
    }
  }
  cout<<"sum of left diagonal elements"<<sl<<endl;
  cout<<"sum of right diagonal elements"<<sr<<endl;
  return 0;
}
