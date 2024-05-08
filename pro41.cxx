//41. to capitalize the first letter of each word in a given string. Words must be separated by only one space using function. 


#include <iostream>
#include <string>

using namespace std;

string capitalizeWords(string str) {
  // Convert the string to lowercase
  for (int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
  }

  // Capitalize the first letter of each word
  for (int i = 0; i < str.length(); i++) {
    
      str[i] = toupper(str[i]);
    }
  

  // Return the capitalized string
  return str;
}

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str);

  cout << "The capitalized string is: " << capitalizeWords(str) << endl;

  return 0;
}