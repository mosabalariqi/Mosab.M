#include <iostream>

using namespace std;

void printTriangle(int N) {
  // If N is less than or equal to 0, return
  if (N <= 0) {
    return;
  }

  // Print N stars
  for (int i = 0; i < N; i++) {
    cout << "*";
  }
  cout << endl;

  // Recursively call the function with N-1
  printTriangle(N-1);
}

int main() {
  int N;

  cout << "Enter an integer: ";
  cin >> N;

  printTriangle(N);

  return 0;
}