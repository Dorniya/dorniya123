#include<iostream>
using namespace std;
int main()
{
 int a=0,b=1,c,n,i;
  cout<<"enter number:\n";
  cin>>n;
  for(i=0;i<=n;i++)
  {
    cout<<a;
    c=a+b;
    a=b;
    b=c;
  }
}
