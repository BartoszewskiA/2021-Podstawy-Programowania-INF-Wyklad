#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Ala Ma kota";
    // s= s.substr(4,2);
    //s.replace(4, 2, "nie ma");
    //s.insert(4,"nie ");
    s.erase(4,3);
    cout<<s;
    return 0;
}