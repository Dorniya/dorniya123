#include<iostream>
using namespace std;
int main()
{
  int i,j,s,n;
  cout<<"enter rows:\n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<n-i;j++)
    {
      cout<<"";
    }
    for(s=1;s<=i;s++)
    {
      cout<<i;
    }
    cout<<"\n";
  }
}
