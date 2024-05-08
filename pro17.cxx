#include <iostream>

int main() {
    using namespace std;

    int table[10];

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> table[i];
    }

    cout << "Here are the numbers you entered: ";
    for (int i = 0; i < 10; i++) {
        cout << table[i] << " ";
    }
    cout << endl;

    return 0;
}
