#include <iostream>
using namespace std;

int main() 
{

    int arr[] = {1, 2, 3, 4, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    int i, max, secondMax;

    max = secondMax = arr[0];

    for (i = 0; i < l; i++) 
	{
        if (arr[i] > max) 
		{
            secondMax = max;
            max = arr[i];
        } 
		else if (arr[i] > secondMax && arr[i] < max) 
		{
            secondMax = arr[i];
        }
    }

    cout << "Second max is " << secondMax << endl;

    return 0;
}
