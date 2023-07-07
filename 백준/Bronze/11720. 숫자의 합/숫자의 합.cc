#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    char s[101];
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        sum += (s[i]-48);
    }
    cout << sum;
    return 0;
}