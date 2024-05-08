/*
47. Write a program that do the following 
1. Reads two strings, s1 and s2. 
2. Creates a new string of their concatenation using + operator or +=. 
3. Prints the new string. 
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, result;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    result = s1 + s2;

    cout << "The concatenated string is: " << result << endl;

    return 0;
}