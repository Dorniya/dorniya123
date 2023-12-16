#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter letter:\n";
  cin>>c;
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
  {
    cout<<"it is vowel";
  }
  else
  {
    cout<<"it is consonant";
  }
}
