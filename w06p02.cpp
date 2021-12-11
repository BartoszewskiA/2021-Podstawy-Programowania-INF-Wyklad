#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    // for (int i=0; i< s.length(); i++)
    //     {
    //         cout<<s[i]<<endl;
    //     }

    // for (int i= s.length()-1; i>=0; i--)
    //     cout<<s[i];

    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            cout << "-";
        else
            cout << s[i];
    return 0;
}