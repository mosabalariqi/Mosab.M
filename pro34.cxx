
// 34.   Which allows the entrance of 10 integers as array using recursion function and then using another function to calculates the difference between the sum of the even elements and the sum of the Odd elements?  for example : 1 6 7 4 5 3 1 8 2 5  ==> (6+4+8+2) - (1+7+5+3+5+1) = -2


#include <iostream>

using namespace std;

// Function to get 10 integers from the user using recursion
void getIntegers(int numbers[], int n) {
  // If n is 0, we have reached the end of the array
  if (n == 0) {
    return;
  }

  // Get the next integer from the user
  cout << "Enter an integer: ";
  cin >> numbers[n - 1];

  // Recursively call the function with n-1
  getIntegers(numbers, n - 1);
}

// Function to calculate the difference between the sum of the even elements and the sum of the odd elements
int sumDifference(int numbers[], int n) {
  // If n is 0, the sum difference is 0
  if (n == 0) {
    return 0;
  }

  // If the current element is even, add it to the sum of even elements
  else if (numbers[n - 1] % 2 == 0) {
    return numbers[n - 1] + sumDifference(numbers, n - 1);
  }

  // Otherwise, add it to the sum of odd elements
  else {
    return -numbers[n - 1] + sumDifference(numbers, n - 1);
  }
}

int main() {
  int numbers[10];

  // Get 10 integers from the user
  getIntegers(numbers, 10);

  // Calculate the difference between the sum of the even elements and the sum of the odd elements
  int sumDiff = sumDifference(numbers, 10);

  // Print the sum difference
  cout << "The difference between the sum of the even elements and the sum of the odd elements is: " << sumDiff << endl;

  return 0;
}