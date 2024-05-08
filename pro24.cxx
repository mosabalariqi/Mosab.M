#include <iostream>

int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    using namespace std;

    int m, n;
    cout << "Enter two integers: ";
    cin >> m >> n;

    cout << "GCD of " << m << " and " << n << " = " << gcd(m, n) << endl;

    return 0;
}