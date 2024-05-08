//36. That allows to test the equality between two tables of integers (sizes 10). The program displays TRUE if the components of the two tables match position by position, otherwise it displays FALSE.     



#include <iostream>

using namespace std;

bool areEqual(int A[], int B[], int size) {
  // Iterate over the elements of the arrays
  for (int i = 0; i < size; i++) {
    // If the elements at the current index are not equal, return false
    if (A[i] != B[i]) {
      return false;
    }
  }

  // If all the elements are equal, return true
  return true;
}

int main() {
  int A[10];
  int B[10];

  // Get the elements of the first array
  cout << "Enter the elements of the first array: ";
  for (int i = 0; i < 10; i++) {
    cin >> A[i];
  }

  // Get the elements of the second array
  cout << "Enter the elements of the second array: ";
  for (int i = 0; i < 10; i++) {
    cin >> B[i];
  }

  // Check if the arrays are equal
  if (areEqual(A, B, 10)) {
    cout << "The arrays are equal." << endl;
  } else {
    cout << "The arrays are not equal." << endl;
  }

  return 0;
}