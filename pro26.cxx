#include <iostream>

using namespace std;

int main() {
  int N;
  int numDigits = 0;

  cout << "Enter an integer: ";
  cin >> N;

  while (N > 0) {
    N /= 10;
    numDigits++;
  }

  cout << "The number of digits is: " << numDigits << endl;

  return 0;
}