#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s;
	cout<<"enter number:\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			cout<<"";
		}
		for(s=1;s<=i;s++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
