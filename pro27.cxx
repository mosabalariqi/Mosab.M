 #include <iostream>

using namespace std;

int reverseDigits(int N) {
  
  if (N < 10) {
    return N;
  }

  
  else {
    return (N % 10) * 10 + reverseDigits(N / 10);
  }
}

int main() {
  int N;

  cout << "Enter an integer: ";
  cin >> N;

  cout << "The reversed digits of " << N << " is: " << reverseDigits(N) << endl;

  return 0;
}