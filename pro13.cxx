#include <iostream>
using namespace std;

void displayMessage() {
    for(int i = 0; i < 10; i++) {
        cout << "Good evening" << endl;
    }
}

int main() {
    int i = 0;
    while(i < 10) {
        displayMessage();
        i++;
    }
    return 0;
}