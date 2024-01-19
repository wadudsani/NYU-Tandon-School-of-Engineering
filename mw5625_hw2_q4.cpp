#include <iostream>
using namespace std;

int main()
{

int num1, num2;
int add, sub, multiply, div, mod;
double divide ; 

cout << "Please enter two positive integers, separated by a space:" << endl;
cin >> num1;
cin >> num2;  


// Perform add, subtract multiply, divide, div and mod them
add = num1 + num2;
sub = num1 - num2;
multiply = num1 * num2;
divide = static_cast <double>(num1) / num2;
div = num1 / num2;
mod = num1 % num2;


cout << num1 << " + " << num2 << " = " << add << endl;
cout << num1 << " - " << num2 << " = " << sub << endl;
cout << num1 << " * " << num2 << " = " << multiply <<endl;
cout << num1 << " / " << num2 << " = " << divide <<endl;
cout << num1 << " div " << num2 << " = " << div << endl;
cout << num1 << " mod " << num2 << " = " << mod <<endl;

return 0;

}