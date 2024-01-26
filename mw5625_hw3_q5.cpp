#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {

double realNumber;
int roundingMethod, roundedNumber;

cout << "Please enter a Real number: ";
cin >> realNumber;

cout << "Choose your rounding method:" << endl;
cout << "1. Floor round" << endl;
cout << "2. Ceiling round" << endl;
cout << "3. Round to the nearest whole number" << endl;
cin >> roundingMethod;
   

switch (roundingMethod) 
{
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
        return 1; 
}

    
cout << "The rounded result is: " << roundedNumber << endl;

    return 0;
}
