 #include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number:\n";
  cin>>n;
  if(n>0)
  {
    cout<<n<<" is positive";
  }
  else if(n<0)
  {
    cout<<n<<" is negative";
  }
  else
  {
    cout<<"zero";
  }
}
