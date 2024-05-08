//44. to insert a space when a lower character follows an upper character in a given string.  Example: Original String: TheQuickBrownFox. output: The Quick Brown Fox. 

#include <iostream>
#include <string>

using namespace std;

string insertSpaces(string str) {
  // Iterate over the string
  for (int i = 0; i < str.length(); i++) {
    // Check if the current character is uppercase and the next character is lowercase
    if (isupper(str[i]) && islower(str[i + 1])) {
      // If so, insert a space between them
      str.insert(i + 1, " ");
      i++;
    }
  }

  // Return the modified string
  return str;
}

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str);

  cout << "The modified string is: " << insertSpaces(str) << endl;

  return 0;
}