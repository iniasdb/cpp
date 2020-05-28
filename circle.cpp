#include <iostream>
using namespace std;

main()
{
    double pi = 3.14;
    double radius, area;
    cout << "radius of your circle: ";
    cin >> radius;
    area = pi * (radius * radius);
    cout << area;
}