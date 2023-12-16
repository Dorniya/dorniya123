#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s;
	cout<<"enter rows:\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n-i+1;j++)
		{
			cout<<" ";
		}
		for(s=1;s<=2*i-1;s++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<n-i+1;j++)
		{
			cout<<" ";
		}
		for(s=1;s<=2*i-1;s++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
