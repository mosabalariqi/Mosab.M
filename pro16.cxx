#include <iostream>

using namespace std;

void multiplicationTable(int num) {
    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }
}

int main() {
    int num;
    cout << "Enter  integer: ";
    cin >> num;
    multiplicationTable(num);
    return 0;
}