//create a program that takes user input of days they had sales and accumulates their total of those days.
#include <iostream>
using namespace std;

int main ()
{
    cout << "how many days did you work this week? ";
    int daysWorked; //total days person worked.
    double accumlatedTotal = 0.0; //this # will change after each iteration.
    cin >> daysWorked;

    for (int counter = 1; counter <= daysWorked; counter++) //here each iteration represents one day of the total. counter keeps track of each day.
    {
        cout << "for day " <<  counter << ", how much sales were confirmed? ";
        double dailySales;
        cin >> dailySales;
        accumlatedTotal += dailySales; //adds sales to accumulator - NOT REASSIGNMENT.
    }
    cout << "your total sales over " << daysWorked << " days is " << accumlatedTotal;
    return 0;
}
