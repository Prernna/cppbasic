#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5}; // array initialization
    cout<<arr[0];              // accessing first element of array it prints 1 
    cout<<arr[-1];             // negative position of array doesn't exist so it will give you runtime error
    cout<<arr[5];             // this position of array does not exist because position ranges from 0 to (length of array)-1   
}
