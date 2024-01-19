#include <iostream>

int main() {
    // Declare variables
    int num1, num2;

    // Get input from the user
    std::cout << "Please enter two positive integers, separated by a space:\n";
    std::cin >> num1 >> num2;

    // Perform calculations and display results
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";

    // Check if the second number is not zero before performing division
    if (num2 != 0) {
        std::cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << "\n";
        std::cout << num1 << " div " << num2 << " = " << num1 / num2 << "\n";
        std::cout << num1 << " mod " << num2 << " = " << num1 % num2 << "\n";
    } else {
        std::cout << "Cannot perform division and modulo as the second number is zero.\n";
    }

    return 0;
}
