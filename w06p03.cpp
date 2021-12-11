#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    int poz = -1, poz_ost =-1;
    // szuka ostatniej spacji
    for (int i = 0; i < s.length(); i++)
        if (s[i]==' ') poz_ost = i;
    // szuka 1 spacji
    for (int i = 0; i < s.length(); i++)
        if (s[i]==' ') 
        {
            poz = i;
            break;
        }
    cout <<"Pozycja ostatniej spacji: "<<poz_ost<<endl;
    cout << "Pozycja 1 spacji: " << poz;

    return 0;
}