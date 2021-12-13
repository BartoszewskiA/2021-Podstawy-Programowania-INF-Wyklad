#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string tab[1000];
    int n = 0;
    fstream plik;

    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();

    // for (int i=0; i<n; i++)
    //     cout<<tab[i]<<endl;

    // for (int i = n - 1; i >= 0; i--)
    //     cout << tab[i] << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = tab[i].length() - 1; j >= 0; j--)
            cout << tab[i][j];
        cout<<endl;
    }

    return 0;
}