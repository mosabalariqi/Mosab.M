/*
49. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
*/

#include <iostream>
using namespace std;
struct Date {
    int day, month, year;
};

int compareDates(Date date1, Date date2) {
    if(date1.year > date2.year)
        return 1;
    else if(date1.year < date2.year)
        return -1;
    else {
        if(date1.month > date2.month)
            return 1;
        else if(date1.month < date2.month)
            return -1;
        else {
            if(date1.day > date2.day)
                return 1;
            else if(date1.day < date2.day)
                return -1;
            else
                return 0;
        }
    }
}

int main() {
    Date date1, date2;
    cout << "Enter the first date (day month year): ";
    cin >> date1.day >> date1.month >> date1.year;
    cout << "Enter the second date (day month year): ";
    cin >> date2.day >> date2.month >> date2.year;
    int result = compareDates(date1, date2);

    if(result == 0)
        cout << "Dates are equal" << endl;
    else
        cout << "Dates are not equal" << endl;

    return 0;
}