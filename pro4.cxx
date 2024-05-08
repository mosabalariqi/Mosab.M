#include <iostream>
using namespace std;

void checkNumber(int number) {
    if(number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    checkNumber(number);
    return 0;
}