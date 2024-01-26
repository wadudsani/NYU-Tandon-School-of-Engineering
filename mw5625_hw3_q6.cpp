#include <iostream>
using namespace std;

int main() {
    // Constants for rounding methods
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;

    // Input variables
    double realNumber;
    int roundingMethod;

    // Getting input
    cout << "Please enter a Real number: ";
    cin >> realNumber;

    // Display rounding method options
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> roundingMethod;

    // Rounding based on the selected method
    int roundedNumber;
    switch (roundingMethod) {
        case FLOOR_ROUND:
            roundedNumber = static_cast<int>(realNumber);
            break;
        case CEILING_ROUND:
            roundedNumber = static_cast<int>(realNumber) + 1;
            break;
        case ROUND:
            roundedNumber = static_cast<int>(realNumber + 0.5);
            break;
        default:
            cout << "Invalid rounding method selected." << endl;
            return 1; // Exit with an error code
    }

    // Output the rounded result
    cout << "The rounded result is: " << roundedNumber << endl;

    return 0;
}
