#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your mark (between 0 and 20): ";
    cin >> mark;

    if (mark > 10) {
        cout << "Validated" << endl;
    } else {
        cout << "Not validated" << endl;
    }

    return 0;
}