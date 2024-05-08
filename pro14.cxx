#include <iostream>
using namespace std;

int sumWhile(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    int r = sumWhile(10);
    cout << "The sum of numbers from 1 to 10 is: " << r << "\n";
    return 0;
}