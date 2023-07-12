#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for(int i=0; i<a.length(); i++)
    {
       if (a[i]==a[a.length()-1-i]){
       true;}
       else{
       cout << "0";
       return 0;}
    }
    cout << "1";
}