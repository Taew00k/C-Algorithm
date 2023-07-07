#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int n;
    string s;
    cin >>n;
    for (int i=0; i<n; i++)
    {
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }
    return 0;
}