#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int turn;
    string a,b;
    cin >> a >> b;
    turn=a[0];
    a[0]=a[2];
    a[2]=turn;
    turn=b[0];
    b[0]=b[2];
    b[2]=turn;
    if(a[0]>b[0]){
        cout << a;
    }
    else if(a[0]<b[0]){
        cout << b;
    }
    else if (a[0]==b[0]){
        if(a[1]>b[1]){
            cout << a;}
        else if(a[1]<b[1]){
            cout << b;
        }
        else if (a[1]==b[1]){
            if (a[2]>b[2]){
                cout << a;
            }
            else if (a[2]<b[2]){
                cout << b;
            }
            else if (a[2]==b[2]){
                false;
            }
        }
    }
}