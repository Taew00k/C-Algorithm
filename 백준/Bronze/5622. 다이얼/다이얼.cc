#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string x;
    int sum = 0;
    cin >> x;
    for(int i=0; i<x.length(); i++)
    {
        if(x[i]<68)
        sum+=3;
        else if(x[i]>=68 && x[i]<71)
        sum+=4;
        else if(x[i]>=71 && x[i]<74)
        sum+=5;
        else if(x[i]>=74 && x[i]<77)
        sum+=6;
        else if(x[i]>=77 && x[i]<80)
        sum+=7;
        else if(x[i]>=80 && x[i]<84)
        sum+=8;
        else if(x[i]>=84 && x[i]<87)
        sum+=9;
        else if(x[i]>=87 && x[i]<91)
        sum+=10;
    }
    cout << sum;
}