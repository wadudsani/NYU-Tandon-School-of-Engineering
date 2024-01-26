#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input variables
    string dayOfWeek;
    int startTime, callLength;

    // Prompt user for input
    cout << "Enter the day of the week (Mo, Tu, We, Th, Fr, Sa, Su): ";
    cin >> dayOfWeek;

    cout << "Enter the start time in 24-hour notation (e.g., 13:30): ";
    cin >> startTime;

    cout << "Enter the length of the call in minutes: ";
    cin >> callLength;

    // Calculate cost based on the provided rate schedule
    double rate;
    if ((dayOfWeek == "Mo" || dayOfWeek == "Tu" || dayOfWeek == "We" || dayOfWeek == "Th" || dayOfWeek == "Fr") &&
        (startTime >= 8 && startTime <= 18)) {
        // Weekdays between 8:00 A.M. and 6:00 P.M.
        rate = 0.40;
    } else if ((dayOfWeek == "Mo" || dayOfWeek == "Tu" || dayOfWeek == "We" || dayOfWeek == "Th" || dayOfWeek == "Fr") &&
               (startTime < 8 || startTime > 18)) {
        // Weekdays before 8:00 A.M. or after 6:00 P.M.
        rate = 0.25;
    } else {
        // Saturday or Sunday
        rate = 0.15;
    }

    // Calculate and display the cost
    double cost = rate * callLength;
    cout << "The cost of the call is: $" << cost << endl;

    return 0;
}
