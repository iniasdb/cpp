#include <iostream>
using namespace std;

main()
{
    double price, tax, percentage, total = 0;
    cout << "price of item: ";
    cin >> price;
    cout << "tax percentage: ";
    cin >> percentage;

    tax = (price * percentage) / 100;
    total = price + tax;
    cout << "price without tax: " + to_string(price) + "\ntax: " + to_string(tax) + "\n total price: " + to_string(total);
}