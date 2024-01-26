#include <iostream>
using namespace std;

int main() {
    double price1, price2,taxRate,basePrice, discountedPrice,totalPrice;
    char hasClubCard;

    cout << "Enter price of first item: ";
    cin >> price1;
    cout << "Enter price of second item: ";
    cin >> price2; 
    cout << "Does customer have a club card? (Y/N): ";
    cin >> hasClubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> taxRate;

    basePrice = price1 + price2;

    if (price1 > price2)
    {
        discountedPrice = price1 + ( price2 /2);
    }
        
    else  
    {
        discountedPrice = (price1 /2) + price2;
    }  
          

    if (hasClubCard == 'Y' || hasClubCard == 'y') 
    {
        discountedPrice *= 0.9;
    }

    
    totalPrice = discountedPrice * (1 + taxRate / 100);

   
    cout << "Base price: " << basePrice << endl;
    cout << "Price after discounts: " << discountedPrice << endl;
    cout << "Total price: " << totalPrice << endl;

    return 0;
}
