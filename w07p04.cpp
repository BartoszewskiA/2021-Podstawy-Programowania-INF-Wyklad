#include <iostream>
#include <string>

using namespace std;

int main()
{
   string tab[100]; 
   int n =0;
   string temp;
   do
   {
       getline(cin,temp);
       if (temp.length()>0)
       {
           tab[n]= temp;
           n++;
       }
   } while (temp.length()>0); // (temp != "")

   for (int i=0; i<n; i++)
        cout<< i+1<<": "<<tab[i]<<endl;
   
    return 0;
}