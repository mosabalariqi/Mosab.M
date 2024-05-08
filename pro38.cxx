//38. Your establishment s photocopy Center charges 0.25 DH for the first 10 photocopies, 0.20 DH for the next 20 and 0.10 DH beyond 20 photocopies. Write an algorithm that prompts the user for the number of photocopies made and displays the corresponding invoice.  

#include <iostream>

using namespace std;

int main() {
  int numCopies;
  double cost;

  cout << "Enter the number of photocopies made: ";
  cin >> numCopies;

  if (numCopies <= 10) {
    cost = numCopies * 0.25;
  } else if (numCopies <= 30) {
    cost = 10 * 0.25 + (numCopies - 10) * 0.20;
  } else {
    cost = 10 * 0.25 + 20 * 0.20 + (numCopies - 30) * 0.10;
  }

  cout << "The cost of " << numCopies << " photocopies is: " << cost << " DH" << endl;

  return 0;
}


