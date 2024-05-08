#include <iostream>

using namespace std;

void px (int num1, int num2) {
  int x = num1 * num2;
  cout << "The x of " << num1 << " and " << num2 << " is: " << x<< endl;
}

int main() {
  int number1, number2;
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;

 px(number1, number2);

  return 0;
}
