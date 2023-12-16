#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int r,n,count=0,sum=0,temp;
  cout<<"enter number:\n";
  cin>>n;
  temp=n;
  while(temp!=0)
  {
    temp=temp/10;
    count++;
  }
 n=temp;
  while(n>0)
  {
    r=n%10;
    sum=sum+pow(r,count);
    n=n/10;
  }
  if(sum==temp)
  {
    cout<<"narcissistic number";
  }
  else
  {
    cout<<"not a narcissistic number";
  }
}
