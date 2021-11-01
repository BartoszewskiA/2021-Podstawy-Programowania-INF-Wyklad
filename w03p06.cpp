#include <iostream>

using namespace std;

int main()
{
    int i = 10;

    cout << "Przed: " << i << endl;
    cout << "W trakcie: " << (--i)++ << endl;
    cout << "Po: " << i;
    return 0;
}