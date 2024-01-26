#include <iostream>
using namespace std;

int main() {
    // Constants for unit conversions
    const double poundsToKg = 0.453592;
    const double inchesToMeters = 0.0254;

    // Input variables
    double weightInPounds, heightInInches;

    // Getting input
    cout << "Please enter weight (in pounds): ";
    cin >> weightInPounds;
    cout << "Please enter height (in inches): ";
    cin >> heightInInches;

    // Convert weight and height to kilograms and meters
    double weightInKg = weightInPounds * poundsToKg;
    double heightInMeters = heightInInches * inchesToMeters;

    // Calculate BMI
    double bmi = weightInKg / (heightInMeters * heightInMeters);

    // Determine weight status based on BMI range
    string weightStatus;
    if (bmi < 18.5) {
        weightStatus = "Underweight";
    } else if (bmi >= 18.5 && bmi < 25) {
        weightStatus = "Normal";
    } else if (bmi >= 25 && bmi < 30) {
        weightStatus = "Overweight";
    } else {
        weightStatus = "Obese";
    }

    // Output the weight status
    cout << "The weight status is: " << weightStatus << endl;

    return 0;
}
