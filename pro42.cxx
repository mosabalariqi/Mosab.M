//42. to insert a dash character (-) between two odd numbers in a given string of numbers. Example: Sample Input: 1345789 Output: Result-> 1-345-789

#include <iostream>
#include <string>
using namespace std;
string insertDash(string num)
{
    string result = " ";
    for (int i = 0; i < num.length(); i++)
    {
        result += num[i];
        if (i < num.length() - 1 && (num[i] - 0) % 2 != 0 && (num[i + 1] - 0) % 2 != 0)
        {
            result += '-';
        }
    }
    return result;
}

int main()
{
    string num;
    cout << "Enter a string of numbers: ";
    cin >> num;
    cout << "Result: " << insertDash(num) << endl;
    return 0;
}