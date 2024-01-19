#include <iostream>
using namespace std;

const int QUARTER_IN_DOLLER = 25;
const int DIME_IN_DOLLER = 10;
const int NICKELS_IN_DOLLER = 5;
const int CENTS_IN_DOLLER = 100;    

int main()
{
int Number_of_Quratters;
int Number_of_Diem;
int Number_of_Nikels;
int Number_of_Pennis;
int total_doller, total_cent, remaining_cents ; 

cout << "Please enter the number of coins :" << endl;
cout << "# of Quarter :" << endl;  
cin >> Number_of_Quratters;
cout << "# of Dime :" << endl; 
cin >> Number_of_Diem;
cout << "# of Nikels :" << endl;
cin >> Number_of_Nikels;
cout << "# of Pennis :" << endl;
cin >> Number_of_Pennis;

// Calculate the total value in Cents
total_cent = Number_of_Quratters * QUARTER_IN_DOLLER + Number_of_Diem * DIME_IN_DOLLER +  Number_of_Nikels * NICKELS_IN_DOLLER + Number_of_Pennis; 

// Calculate total doller and remaining Cents 
total_doller = total_cent / CENTS_IN_DOLLER;
remaining_cents = total_cent % CENTS_IN_DOLLER; 

cout << "The total is" << total_doller <<" and "<< remaining_cents<< "cents"<< endl;
return 0;
}