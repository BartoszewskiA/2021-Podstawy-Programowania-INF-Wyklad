#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL)); // 1 x na początku programu
    for (int i = 0; i < 20; i++)
    {
        cout << rand() % 201 - 100 << " ";
    }
    return 0;
}