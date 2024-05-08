#include <iostream>
using namespace std;

int findLargest(int num1, int num2, int num3) {
    int largest;
    if (num1 >= num2 && num1 >= num3)
        largest = num1;
    else if (num2 >= num1 && num2 >= num3)
        largest = num2;
    else
        largest = num3;
    return largest;
}

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The largest integer is: " << findLargest(num1, num2, num3);
    return 0;
}