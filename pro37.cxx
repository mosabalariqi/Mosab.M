// 37. That counts the number of duplicate elements (two or more elements) in a table of integers entered by the user.  

#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int numbers[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (numbers[i] == numbers[j]) {
        count++;
      }
    }
  }

  cout << "The number of duplicate elements is: " << count << endl;

  return 0;
}