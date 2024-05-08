/*
50. to find the maximum number between two numbers using a pointer. 
Example: 
Input the first number : 5 
Input the second number : 6 
Expected Output : 6 is the maximum number.
*/


#include <iostream>
using namespace std;

int findMax(int* num1, int* num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;
    int maxNumber = findMax(&num1, &num2);
    cout << maxNumber << " is the maximum number." << endl;
    return 0;
}