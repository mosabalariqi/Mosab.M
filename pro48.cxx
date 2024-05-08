/*
48. Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 
1 - Write a function to print the names of all the customers having balance less than $200. 
2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
*/

#include <iostream>
#include <string>

using namespace std;

struct Customer {
    string name;
    int accountNumber;
    double balance;
};

void printCustomersWithLowBalance(Customer customers[], int size) {
    cout << "Customers with balance less than $200:" << endl;
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 200) {
            cout << customers[i].name << endl;
        }
    }
}

void incrementBalanceForHighBalanceCustomers(Customer customers[], int size) {
    cout << "Customers with balance more than $1000, incremented by $100:" << endl;
    for (int i = 0; i < size; i++) {
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
            cout << customers[i].name << ": " << customers[i].balance << endl;
        }
    }
}

int main() {
    const int numCustomers = 15; // more than 10
    Customer customers[numCustomers];

    // initialize customers  information
    customers[0] = {"John", 1, 500};
    customers[1] = {"Alice", 2, 1500};
    customers[2] = {"Bob", 3, 800};
    customers[3] = {"Eve", 4, 1200};
    customers[4] = {"Mike", 5, 300};
    customers[5] = {"Sarah", 6, 2500};
    customers[6] = {"Tom", 7, 900};
    customers[7] = {"Lily", 8, 1800};
    customers[8] = {"David", 9, 400};
    customers[9] = {"Emily", 10, 2200};
    customers[10] = {"James", 11, 600};
    customers[11] = {"Kate", 12, 2800};
    customers[12] = {"Oliver", 13, 1000};
    customers[13] = {"Sophia", 14, 350};
    customers[14] = {"William", 15, 3200};

    printCustomersWithLowBalance(customers, numCustomers);
    incrementBalanceForHighBalanceCustomers(customers, numCustomers);

    return 0;
}