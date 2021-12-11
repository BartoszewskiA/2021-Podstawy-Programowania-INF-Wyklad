#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string s = "Ala ma kota";
    // cout<<s;

    string s;
    cout << "przedstaw sie: ";
    //cin >> s;
    getline(cin, s);
    string odpowiedz = "";
    odpowiedz += "Witaj ";
    odpowiedz += s;
    odpowiedz += "!";

    // odpowiedz.clear();

    cout << odpowiedz;
    //cout << "Witaj " << s << "!";
    return 0;
}