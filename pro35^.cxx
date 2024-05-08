
//35 مكرر

#include <iostream>
#include <cmath>

using namespace std;

double power(double x, int n) {
  // If n is 0, return 1
  if (n == 0) {
    return 1;
  }

  // If n is odd, return x times the square of the result of calling the function with n-1
  else if (n % 2 == 1) {
    return x * pow(x, n - 1);
  }

  // Otherwise, return the square of the result of calling the function with n/2
  else {
    return pow(x, n / 2) * pow(x, n / 2);
  }
}

int main() {
  double x;
  int n;

  cout << "Enter a real number x: ";
  cin >> x;

  cout << "Enter a positive integer n: ";
  cin >> n;

  cout << "The value of " << x << " raised to the power of " << n << " is: " << power(x, n) << endl;

  return 0;
}


