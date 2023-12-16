#include<iostream>
using namespace std;
int main()
{
  int n=12,sum=0,i;
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
    if( sum>n)
    {
      cout<<n<<" is abundant";
    }
    else
    {
      cout<<n<<" not abundant";
    }
  return 0;
}
