#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%10==7)
	{
		cout<<"buzz number";
	}
	else if(n%7==0)
	{
		cout<<"buzz number";
	}
	else
	{
		cout<<"not";
	}
	return 0;
}
