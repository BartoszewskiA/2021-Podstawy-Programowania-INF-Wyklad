#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj nume dnia tygodnia: ";
    cin >>nr;
    
    switch (nr)
    {
        case 1: cout << "Ni"; break;
        case 2: cout << "Po"; break;
        case 3: cout << "Wt"; break;
        case 4: cout << "Sr"; break;
        case 5: cout << "Cz"; break;
        case 6: cout << "Pi"; break;
        case 7: cout << "So"; break;
        default: cout<<"To ie jest numer dnia tygodnia";
    }

    return 0;
}