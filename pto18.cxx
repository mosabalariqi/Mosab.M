#include<iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    int max = 0;

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Average: " << (float)sum/10 <<"\n";
    cout << "Maximum: " << max <<"\n";

  
    return 0;
}