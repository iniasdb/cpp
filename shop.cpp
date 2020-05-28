#include <iostream>
using namespace std;

main()
{
    string products[10] = {"Soda",
                           "Milk",
                           "Bread",
                           "Beer",
                           "Salty snacks",
                           "Cheese",
                           "Frozen dinners",
                           "Cereals",
                           "Wine",
                           "Cigarettes"};

    string cart[];

    for (int i = 0; i < 10; i++)
    {
        cout << to_string(i) + ": " + products[i] + "\n";
    }

    while (true)
    {
        string x;
        cout << "press 'qq' to quit.\nwhich items would you like to buy (1-10)";
        cin >> x;
        if (x.compare("q"))
        {
            break;
        }
        else
        {
        }
    }

    cout << "quitted";
}