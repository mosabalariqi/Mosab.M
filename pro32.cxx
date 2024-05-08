//32. which allows the user to enter a series of integers as array ending in 0, and which displays at the end the number of occurrences of  5    

#include <iostream>

using namespace std;

int main() {
  int numbers[100];
  int count = 0;

  // Get a series of integers from the user, ending in 0
  cout << "Enter a series of integers, ending in 0: ";
  for (int i = 0; i < 100; i++) {
    cin >> numbers[i];
    if (numbers[i] == 0) {
      break;
    }
  }

  // Count the number of occurrences of 5
  for (int i = 0; i < 100; i++) {
    if (numbers[i] == 5) {
      count++;
    }
  }

  // Display the number of occurrences of 5
  cout << "The number of occurrences of 5 is: " << count << endl;

  return 0;
}