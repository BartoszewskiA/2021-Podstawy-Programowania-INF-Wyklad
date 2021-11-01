#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,delta;
    cout <<"a=";
    cin >> a;
    cout <<"b=";
    cin >> b;
    cout <<"c=";
    cin >> c;
    delta = b*b-4*a* c;
    if (delta > 0)
    {
        double x1= (-b - sqrt(delta)) /(2*a);
        double x2= (-b + sqrt(delta)) /(2*a);
        cout << "x1=" << x1 << endl << "x2=" << x2;
    }
    else if (delta == 0)
    {
        double x0 = (double)(-b)/(2*a);
    }
    else
    {
        cout <<"Brak zozwiazan";
    }
    return 0;
}
