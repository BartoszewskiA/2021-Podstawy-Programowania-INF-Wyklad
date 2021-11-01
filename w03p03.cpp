#include <iostream>

using namespace std;

int main()
{
    int x, s = 0, i = 0;
    do
    {
        cout << "x=";
        cin >> x;
        if (x >= 0)
        {
            //s = s + x;
            s += x;
            i++;
        }
    } while (x >= 0);

    cout << "Suma=" << s << endl
         << "Srednia=" << (double)s / i;

    return 0;
}