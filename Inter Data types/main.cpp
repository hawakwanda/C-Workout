#include <iostream>

using namespace std;

int main()
{
    // This program has variables of several of the integer types.
    int checking;
    unsigned int miles;
    long days;

    checking = -20;
    miles = 4276;
    days = 189000;
    cout << "We have made a long journey of " << miles;
    cout << " miles.\n";

    cout << " our checking account balance is " << checking;
    cout << "\nAbout " << days << " days ago columbus";
    cout << " stood on this spot.\n";


    // this program shows three variables defined on the same line.

    int floors, rooms, suites;

    floors = 15;
    rooms = 300;
    suites = 30;

    cout << " the Grande Hotel has " << floors << " floors\n";
    cout << " with " << rooms << " rooms and " << suites;
    cout << " suites.\n";


    return 0;

}
