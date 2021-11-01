#include <iostream>

using namespace std;

int main()
{
    int x, s = 0, i = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x < 0) break;
    //     s = s + x;
    //     i++;
    // } while (1);


    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0) break;
        s = s + x;
        i++;
    }

    cout << "Suma=" << s << endl
         << "Srednia=" << (double)s / i;

    return 0;
}