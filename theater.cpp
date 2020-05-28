#include <iostream>
using namespace std;

main()
{
    int xKid, xChild, xAdult, xSenior = 0;
    double price = 0;
    double kid = 3.70;
    double child = 5.67;
    double adult = 8.96;
    double senior = 4.56;

    cout << "How many kid tickets? (age 0-5) ";
    cin >> xKid;
    cout << "How many child tickets? (age 6-12) ";
    cin >> xChild;
    cout << "How many adult tickets? (age 13-65) ";
    cin >> xAdult;
    cout << "How many senior tickets? (age 66 and up) ";
    cin >> xSenior;

    price = (xKid * kid) + (xChild * child) + (xAdult * adult) + (xSenior * senior);
    cout << price;
}