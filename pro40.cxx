// 40. to reverse a given string using recursion function. 



#include <iostream>
using namespace std;

void reverseString(string str) {
    if (str.length() > 0) {
        reverseString(str.substr(1));
        cout << str[0];
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    reverseString(str);
    cout << endl;
    return 0;
}
