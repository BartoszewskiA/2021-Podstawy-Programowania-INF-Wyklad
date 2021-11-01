#include <iostream>

using namespace std;

int main()
{
    cout <<"x:";
    int x;
    cin >> x;
    if (x == 0)
        cout << "TAK, liczba " << x << " jest rowna 0";
    else
        cout << "NIE, liczba "<< x << " nie jest rowna 0";
  
    return 0;
}