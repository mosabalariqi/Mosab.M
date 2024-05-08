// 31. That requires entering a table T of 10 integers, and putting the even elements in a T1 table and the Odd elements in a T2 table. Then display T1 and T2   



#include <iostream>

using namespace std;

int main() {
  int T[10];
  int T1[10];
  int T2[10];
  int evenCount = 0;
  int oddCount = 0;

  // Get 10 integers from the user
  cout << "Enter 10 integers: ";
  for (int i = 0; i < 10; i++) {
    cin >> T[i];
  }

  // Separate even and odd elements into T1 and T2
  for (int i = 0; i < 10; i++) {
    if (T[i] % 2 == 0) {
      T1[evenCount] = T[i];
      evenCount++;
    } else {
      T2[oddCount] = T[i];
      oddCount++;
    }
  }

  // Display T1 and T2
  cout << "Even elements: ";
  for (int i = 0; i < evenCount; i++) {
    cout << T1[i] << " ";
  }
  cout << endl;

  cout << "Odd elements: ";
  for (int i = 0; i < oddCount; i++) {
    cout << T2[i] << " ";
  }
  cout << endl;

  return 0;
}