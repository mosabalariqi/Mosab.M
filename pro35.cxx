//35. Allowing, from a real X and a positive integer value N, to calculate X power N  


#include <iostream>
using namespace std;
double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int n;
    cout << "Enter a real number: ";
    cin >> x;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "The result of " << x << " power " << n << " is: " << power(x, n) << endl;
    return 0;
}