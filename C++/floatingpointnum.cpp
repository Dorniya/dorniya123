#include<iostream>
using namespace std;
int main()
{
  float n1,n2,add,sub,mul,div;
  cout<<"enter two number:\n";
  cin>>n1>>n2;
  add=n1+n2;
  sub=n1-n2;
  mul=n1*n2;
  div=n1/n2;
  cout<<n1<<"+"<<n2<<"="<<add;
  cout<<"\n";
  cout<<n1<<"-"<<n2<<"="<<sub;
  cout<<"\n";
  cout<<n1<<"*"<<n2<<"="<<mul;
  cout<<"\n";
  cout<<n1<<"/"<<n2<<"="<<div;
}
