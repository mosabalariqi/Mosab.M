#include <iostream>
using namespace std;

int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }
    int x;
    cout << "Enter integer N: ";
    cin >> x;
    int result = countOccurrences(arr, 10, x);
    cout << "The number of occurrences of " << x << " in the table is: " << result << endl;
    return 0;
}