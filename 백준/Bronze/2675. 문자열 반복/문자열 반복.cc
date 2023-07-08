#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, r;
    char s[21];
    string p[161];
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> r >> s;
        for(int i=0; i<strlen(s); i++)
        {
            for(int j=r*i; j<r*i+r; j++)
            {
                p[j]=s[i];
            }
        }
        for(int i=0; i<r*strlen(s); i++)
        {
            cout << p[i];
        }
        cout << "\n";
    }
    return 0;
}