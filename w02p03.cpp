#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj nume dnia tygodnia: ";
    cin >>nr;
    if (nr == 1)
        cout <<"NI";
    else if(nr == 2)
        cout << "Pn";
    else if(nr == 3)
        cout << "Wt";
    else if(nr == 4)
        cout << "Sr";
    else if(nr == 5)
        cout << "Czw";
    else if(nr == 6)
        cout << "Pi";
    else if (nr == 7)
        cout << "So";
    else
        cout <<"To nie jest nume dnia tygodnia";
    return 0;
}