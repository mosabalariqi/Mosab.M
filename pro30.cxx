//30. That displays if an integer N entered on the keyboard is Prime or not using recursion function.  


#include <iostream>

using namespace std;

bool isPrime(int N) {
  // If N is less than or equal to 1, it is not prime
  if (N <= 1) {
    return false;
  }

  // If N is 2, it is prime
  else if (N == 2) {
    return true;
  }

  // If N is divisible by 2, it is not prime
  else if (N % 2 == 0) {
    return false;
  }

  // Otherwise, check if N is divisible by any number from 3 to the square root of N
  else {
    for (int i = 3; i <= sqrt(N); i += 2) {
      if (N % i == 0) {
        return false;
      }
    }
    return true;
  }
}

int main() {
  int N;

  cout << "Enter an integer: ";
  cin >> N;

  if (isPrime(N)) {
    cout << N << " is a prime number." << endl;
  } else {
    cout << N << " is not a prime number." << endl;
  }

  return 0;
}