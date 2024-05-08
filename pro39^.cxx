// 39. That reads a character and says if it is a letter or not, in case of a letter it says if it is a lowercase or uppercase letter using functions.   


#include <iostream>

using namespace std;

bool isLetter(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isLowerCase(char c) {
  return (c >= 'a' && c <= 'z');
}

int main() {
  char c;

  cout << "Enter a character: ";
  cin >> c;

  if (isLetter(c)) {
    if (isLowerCase(c)) {
      cout << "The character " << c << " is a lowercase letter." << endl;
    } else {
      cout << "The character " << c << " is an uppercase letter." << endl;
    }
  } else {
    cout << "The character " << c << " is not a letter." << endl;
  }

  return 0;
}