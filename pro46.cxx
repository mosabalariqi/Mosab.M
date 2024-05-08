/*
46. Given non-negative number n, return a new array of strings of length n, containing the C++ strings "0", "1" "2"… n-1. If n is 0 or less, return nullptr. 
Your function must have the following signature: 
string* fizzArray2 (int n); 
For example: 
fizzArray2(4) → {"0", "1", "2", "3"} 
fizzArray2(2) → {"0", "1"} 
fizzArray2(0) → nullptr 
*/
#include <iostream>
#include <string>
using namespace std;

string *fizzArray2(int n)
{
    if (n <= 0)
    {
        return nullptr;
    }

    string *arr = new string[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = to_string(i);
    }

    return arr;
}

int main()
{
    int n = 4;
    string *arr2 = fizzArray2(n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << "n";
    }
    delete[] arr2;
    return 0;
}
