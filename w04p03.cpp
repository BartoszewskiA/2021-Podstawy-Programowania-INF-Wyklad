#include <iostream>

using namespace std;


int main()
{
    int tab[10] = {0};
    // for (int i = 0; i < 10; i++)
    //     tab[i]=0;
    for (int i = 0; i <10; i++)
        cout << "{" << tab[i] << "}";
    return 0;
}