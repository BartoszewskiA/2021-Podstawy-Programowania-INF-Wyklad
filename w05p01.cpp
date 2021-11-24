#include <iostream>

using namespace std;

void nowa_funkcja();
int nowa_funkcja_2();
int nowa_funkcja_3(int a=0, int b=0);
void zamien_miejscami(int &x, int &y);

int main()
{
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << nowa_funkcja_3(x,6);
    //zamien_miejscami(x,y);
    //cout<<"po zamianie "<<x<<" "<<y;
    return 0;
}

void nowa_funkcja()
{
    cout << "to ja nowa funkcja";
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << x + y;
}

int nowa_funkcja_2()
{
    cout << "to ja nowa funkcja" << endl;
    int x, y;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    return x + y;
}

int nowa_funkcja_3(int a, int b)
{
    cout << "to ja nowa funkcja" << endl;

    return a + b;
}

void zamien_miejscami(int &x, int &y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
    cout << "wewnatrz funkcji " << x << " " << y<<endl;
}