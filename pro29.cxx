




#include <iostream>

using namespace std;

int main() {
  int numbers[10];
  int oddCount = 0;
  int evenCount = 0;

  // Get 10 integers from the user
  cout << "Enter 10 integers: ";
  for (int i = 0; i < 10; i++) {
    cin >> numbers[i];
  }

  // Count the number of odd and even elements
  for (int i = 0; i < 10; i++) {
    if (numbers[i] % 2 == 0) {
      evenCount++;
    } else {
      oddCount++;
    }
  }

  // Print the results
  cout << "The number of odd elements is: " << oddCount << endl;
  cout << "The number of even elements is: " << evenCount << endl;

  return 0;
}