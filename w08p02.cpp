#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane_02.txt", ios::out);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }

    for (int i = 0; i < 10; i++)
    {
        plik << "tekst do zapisania";
        if (i < 9)
            plik << endl;
    }   
     plik.close();
    return 0;
}