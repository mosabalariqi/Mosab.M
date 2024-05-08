#include <iostream>

int main() {
    using namespace std;

    int age;
    cout << "Enter the age of the child: ";
    cin >> age;

    if (age >= 6 && age <= 7) {
        cout << "The child is a Kid from 6 to 7 years old." << endl;
    } else if (age >= 8 && age <= 9) {
        cout << "The child is a Pupil from 8 to 9 years old." << endl;
    } else if (age >= 10 && age <= 11) {
        cout << "The child is a Kid of 10 to 11 years old." << endl;
    } else if (age > 12) {
        cout << "The child is a Cadet after 12 years." << endl;
    } else {
        cout << "The age provided is not within the given ranges." << endl;
    }

    return 0;
}