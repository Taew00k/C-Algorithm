#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string cro;
    int count= 0;
    cin >> cro;
    for(int i=0; i<cro.length(); i++)
    {
        count ++;
        if(cro[i]==45)
            count --;
        else if (cro[i]==61)
        {
            if(cro[i-1]==122){
                if(cro[i-2]==100)
                    count -= 2;
                else
                    count --;
            }
            else count --;
        }
        else if (cro[i]==106)
        {
            if(cro[i-1]==108)
                count --;
            else if (cro[i-1]==110)
                count--;
        }
    }
    cout << count;
}