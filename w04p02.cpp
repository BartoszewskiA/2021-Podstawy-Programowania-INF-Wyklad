#include <iostream>
using namespace std;

int main()
{
    int wynik[30];
    int n = 0; // aktualna dlugosc tablicy
    int x;
    cout << "x=";
    cin >> x;
    do
    {
        // cout << x % 2;
        wynik[n] = x % 2;
        n++;
        x = x / 2;
    } while (x > 0);

    for (int i = n-1; i>=0; i--)
        cout<<wynik[i];
    return 0;
}