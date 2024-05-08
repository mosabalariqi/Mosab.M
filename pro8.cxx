#include <iostream>
using namespace std;

int absoluteValue(int number) {
    if (number < 0) {
        return -number;
    } else {
        return number;
    }
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The absolute value of " << num << " is " << absoluteValue(num) << endl;
    return 0;
}