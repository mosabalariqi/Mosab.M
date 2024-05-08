#include <iostream>

using namespace std;

void checkProductSign(int M, int N) {
  int product = M * N;
  if (product > 0) {
    cout << "The product of " << M << " and " << N << " is positive." << endl;
  } else if (product < 0) {
    cout << "The product of " << M << " and " << N << " is negative." << endl;
  } else {
    cout << "The product of " << M << " and " << N << " is zero." << endl;
  }
}

int main() {
  int M, N;
  cout << "Enter two numbers (M and N): ";
  cin >> M >> N;

  checkProductSign(M, N);

  return 0;
}
