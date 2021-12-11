#include <iostream>
#include <string>

using namespace std;

int main()
{
    string miejscowosc;
    cout<<"Podaj miejscowosc: ";
    getline(cin,miejscowosc);
    //Radom
    //radom
    //RADOM
    //RAdom
    for (int i=0; i<miejscowosc.length(); i++)
        miejscowosc[i] = tolower(miejscowosc[i]);
        
    miejscowosc[0]= toupper(miejscowosc[0]);
    cout<<"Miejscowosc: "<<miejscowosc;
    return 0;
}