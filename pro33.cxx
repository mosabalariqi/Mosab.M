//33. That allows entering 10 integers and saying if these integers are consecutive or not using recursion function.    


#include <iostream>

using namespace std;

bool isConsecutive(int numbers[], int n) {
  // If there is only one element, it is consecutive
  if (n == 1) {
    return true;
  }

  // If the difference between the current element and the previous element is not 1, it is not consecutive
  else if (numbers[n - 1] - numbers[n - 2] != 1) {
    return false;
  }

  // Otherwise, check the remaining elements
  else {
    return isConsecutive(numbers, n - 1);
  }
}

int main() {
  int numbers[10];

  // Get 10 integers from the user
  cout << "Enter 10 integers: ";
  for (int i = 0; i < 10; i++) {
    cin >> numbers[i];
  }

  // Check if the integers are consecutive
  if (isConsecutive(numbers, 10)) {
    cout << "The integers are consecutive." << endl;
  } else {
    cout << "The integers are not consecutive." << endl;
  }

  return 0;
}