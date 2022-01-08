#include <iostream>
#include <string>

using namespace std;

const int ILE = 3;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
    bool zaszczepiony;
} osoby[ILE];

int main()
{
    string temp;
    // osoba ktos = {"Jan", "Kowalski", 30, true, 'm'};

    // cout << "Imie:" << ktos.imie << endl
    //      << "nazwisko:" << ktos.nazwisko << endl
    //      << "wiek" << ktos.wiek;

    for (int i = 0; i < ILE; i++)
    {
        cout << "Imiona:";
        getline(cin,osoby[i].imie);
        cout << "Nazwisko:";
        getline(cin,osoby[i].nazwisko);
        cout << "Wiek";
        //cin >> osoby[i].wiek;
        getline(cin,temp);
        osoby[i].wiek = atoi(temp.c_str());
        osoby[i].zaszczepiony = true;
    }
    for (int i = 0; i < ILE; i++)
    {
        cout << "Imie:" << osoby[i].imie
             << "  Nazwisko:"
             << osoby[i].nazwisko
             << "  Wiek"
             << osoby[i].wiek << endl;
    }

    return 0;
}