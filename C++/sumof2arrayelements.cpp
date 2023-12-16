#include <iostream>
using namespace std;
int main() 
{
	const int size=5;
    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {6, 7, 8, 9, 10};
   
    int sum[size];

    
    for (int i = 0; i < size; i++) 
	{
        sum[i] = array1[i] + array2[i];
    }

    
    std::cout << "Sum of the two arrays:" << std::endl;
    for (int i = 0; i < size; i++) 
	{
        std::cout << sum[i] << " ";
    }

    return 0;
}
