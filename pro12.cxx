#include <iostream>
#include <array>

int main()
{
    using namespace std;

    const array<string, 12> months = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

    int monthNum;
    cout << "Enter the number of the month 1-12: ";
    cin >> monthNum;

    if (monthNum >= 1 && monthNum <= 12)
    {
        cout << " month is: " << months[monthNum - 1] << "\n";
    }
    else
    {
        cout << "Invalid month number."  << "\n";
        
    }

    return 0;
}