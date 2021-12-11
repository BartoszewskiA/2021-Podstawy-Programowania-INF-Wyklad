#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj imie i nazwisko: ";
    getline(cin, s);
    int poz = 0;
    int temp = 0;

    //poz = s.find(' '); wyszukanie pierwszej spacji

    while (temp < s.length() && temp != -1) // wyszukanie ostatniej
    {
        temp = s.find(' ', poz + 1);
        if (temp > 0)
            poz = temp;
        //cout << "Pozycja ostatniej spacji: " << poz << endl;
    }

    string imie = s.substr(0, poz); // uwaga "poz" to w tym przypadku
                                    //liczba znakow do wczytania
    //sprawdzamy, czy sa dwa imiona
    int poz_2_imienia = 0;
    if (imie.find(' ') == -1)
    {
        cout << "imie:" << imie << ";" << endl;
    }
    else
    {
        poz_2_imienia = imie.find(' ');
        cout << "pierwsze imie:" << imie.substr(0, poz_2_imienia) << endl;
        cout << "drugie imie:" << imie.substr(poz_2_imienia + 1, imie.length() - 1 - poz_2_imienia) << endl;
    }

    string nazwisko = s.substr(poz + 1, s.length() - 1 - poz);
    cout << "nazwisko:" << nazwisko << ";" << endl;
    // Artur Bartoszewski

    return 0;
}