#include <iostream>

using namespace std;
//zmienne globalne
int x = 10;

void wypisz();

int main()
{
    wypisz();
    cout<<endl<<x;
    return 0;
}

void wypisz()
{
    x = 101;
    cout << "x=" << x;
}