#include <iostream>

int main() {
    using namespace std;

    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of 1 to " << n << " is: " << sum << "\n";;

    return 0;
}