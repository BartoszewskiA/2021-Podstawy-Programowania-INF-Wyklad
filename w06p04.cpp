#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    int poz = 0;

    //poz = s.find(' '); wyszukanie pierwszej spacji

    while (poz<s.length() && poz!=-1) // wyszukanie ostatniej
    {
        poz = s.find(' ', poz+1);
        if (poz  != -1) cout << "Pozycja spacji: " << poz << endl;
    }

    return 0;
}