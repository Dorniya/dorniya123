#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
    int l=sizeof(arr)/sizeof(arr[0]);
    int i,j,max,min;
    max=min=arr[0];
    for(i=0;i<l;i++)
    {
    	for(j=0;j<l;j++)
    	{
    		if(arr[i]>max)
    		max=arr[i];
    		if(arr[j]<min)
    		min=arr[j];
		}
	}
		cout<<"min is"<<min<<endl;
		cout<<"max is"<<max<<endl;
	
	return 0;
}
