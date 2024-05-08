//45. A string is created using the letters of another string. Letters are case sensitive. Write a C++ program to verify that the letters in the second string appear in the first string. Return true otherwise false. Example:  ("CPP", "Cpp") -> false ("Java", "Ja") -> true 


#include <iostream>
#include <string>

using namespace std;

bool verifyLetters(string str1, string str2)
{
    // Convert both strings to lowercase for case-insensitive comparison
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Iterate over the characters in the second string
    for (char c : str2)
    {
        // Check if the character is not found in the first string
        if (str1.find(c) == string::npos)
        {
            // If the character is not found, return false
            return false;
        }
    }

    // If all characters in the second string are found in the first string, return true
    return true;
}

int main()
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    bool result = verifyLetters(str1, str2);

    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}