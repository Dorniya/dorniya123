#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=n*n;
	int sum=0;
	while(a>0)
	{
		sum=sum+a%10;
		a=a/10;
	}
	if(sum==n)
	{
		cout<<"neon number";
	}
	else
	{
		cout<<"not";
	}
	return 0;
}
