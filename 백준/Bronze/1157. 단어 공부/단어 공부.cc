#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string h;
    int x;
    int max=0;
    int a[26]={0,};
    char b;
    cin >> h;
    int len = h.length();
    for(int i=0; i<len; i++)
    {
        if (h[i]>90)
            x=h[i]-97;
        else
            x=h[i]-65;
        a[x] +=1;
    }
    for(int i=0; i<26; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            b=i+65;
        }
        else if(a[i]==max)
        {
            b=63;
        }
        else true;
    }
    cout << b;
    return 0;    
}