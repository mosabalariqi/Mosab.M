// 43. to remove all special characters from a given string. Example: Original string: abcd $ js# @acde$ New string after removing the special characters from the said string: abcd js acde 

#include <iostream>
#include <string>

using namespace std;

string removeSpecialCharacters(string str) {
  
  for (int i = 0; i < str.length(); i++) {
   
    if (!isalnum(str[i])) {
      
      str.erase(i, 1);
      i--;
    }
  }

  
  return str;
}

int main() {
  string str;

  cout << "Enter a string: ";
  getline(cin, str);

  cout << "The modified string is: " << removeSpecialCharacters(str) << endl;

  return 0;
}