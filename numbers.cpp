#include <iostream>
using namespace std;

main()
{
    int min, max, difference;

    int numbers[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "enter number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (numbers[i + 1] < numbers[i])
        {
            min = numbers[i + 1];
        }
        if (numbers[i + 1] > numbers[i])
        {
            max = numbers[i + 1];
        }
    }

    difference = max - min;

    cout << "smallest number: " + to_string(min) + "\nbiggest number: " + to_string(max) + "\ndifference: " + to_string(difference);
}