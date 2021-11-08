#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n, a, b;
    cout << "n=";
    cin >> n;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    for (int i=0; i<n;i++)
        cout << rand()%(b+1 - a) + a<<" ";
    return 0;
}