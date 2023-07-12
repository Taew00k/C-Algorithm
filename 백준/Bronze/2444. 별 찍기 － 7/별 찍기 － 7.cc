#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int a=0; a<n-1-i; a++)
        {
            cout << " ";
        }
        for(int b=0; b<1+2*i; b++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n-2; i>=0; i--)
    {
        for(int a=0; a<n-1-i; a++)
        {
            cout << " ";
        }
        for(int b=0; b<1+2*i; b++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}