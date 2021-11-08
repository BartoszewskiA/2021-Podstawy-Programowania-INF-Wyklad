#include <iostream>

using namespace std;

int main()
{
    int tab_2d[4][4] = {0, 0, 0, 1,
                        0, 1, 1, 0,
                        1, 0, 0, 0,
                        0, 0, 0, 0};

    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (tab_2d[x][y] == 1)
        cout << "trafiony";
    else
        cout << "pudlo";
    return 0;
}