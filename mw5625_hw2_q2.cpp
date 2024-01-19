#include <iostream>
using namespace std;

int main()
{
int required_doller, required_cents;
int total_cent, num_quarters, num_dime, num_nickels, num_pennies ; 

cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
cin >> required_doller;
cin >> required_cents;  


// Calculate the total numbert of Cents
total_cent = required_doller * 100 + required_cents;

// Calculate the maximum number of quarters, dime, nickel, pennies  
num_quarters = total_cent / 25;
total_cent %= 25;

num_dime = total_cent / 10;
total_cent %= 10;

num_nickels = total_cent / 5;
total_cent %= 5;

num_pennies = total_cent;

cout << required_doller <<" doller and " << required_cents <<" cents are : "<< endl;
cout << num_quarters <<" quarters, " << num_dime <<" dime, "<< num_nickels <<" nickels, "<< num_pennies<< "pennies."<<endl;

return 0;

}