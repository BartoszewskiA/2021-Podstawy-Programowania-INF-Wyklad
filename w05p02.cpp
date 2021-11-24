#include <iostream>

using namespace std;

double srednia(int x, int y);
double srednia(int x, int y, int z);
double srednia(double x, double y);

int main()
{
    cout << srednia(2.0, 5.5);
    return 0;
}

double srednia(int x, int y)
{
    cout << "srednia 2 liczb" << endl;
    return (x + y) / 2.0;
}

// int srednia(int x, int y) - tak nie można
// {
//     cout << "srednia 2 liczb" << endl;
//     return (x + y) / 2;
// }

double srednia(int x, int y, int z)
{
    cout << "srednia 3 liczb" << endl;

    return (x + y + z) / 3.0;
}

double srednia(double x, double y)
{
    cout << "srednia 2 liczb rzeczywistych" << endl;
    return (x + y) / 2;
}