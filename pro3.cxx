#include <iostream>
using namespace std;
void swap(int& A, int& B) {
    int temp = A;
    A = B;
    B = temp;
}

int main() {
    int A, B;
    cout << "Enter two integers: ";
    cin >> A >> B;

    swap(A, B);

    cout << "After swapping, the integers are: " << A << " and " << B << endl;

    return 0;
}