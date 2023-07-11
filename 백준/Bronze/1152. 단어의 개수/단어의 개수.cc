#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a;
    int count = 1;
    getline(cin,a);
    if(a.length()==1 && a[0]==32)
    count--;
    else true;
    for(int i=1; i<a.length()-1; i++)
    {
    if (a[i]== 32)
    count ++;
    else true;
    }
    cout << count;
    return 0;
}