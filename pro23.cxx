#include <iostream>
using namespace std;

int sumOfOdds(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return n + sumOfOdds(n-2);
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The sum of odd integers from 1 to " << n << " is: " << sumOfOdds(n) << endl;
    return 0;
}