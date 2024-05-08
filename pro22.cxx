#include <iostream>
using namespace std;
void displayEvenNumbers(int N)
{
    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Even numbers between 0 and " << N << " are: ";
    displayEvenNumbers(N);
    return 0;
}