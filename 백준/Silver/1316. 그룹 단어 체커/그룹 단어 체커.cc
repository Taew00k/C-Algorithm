#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string h;
    int alpha[26]={0,};
    int n;
    int count=0;
    int add=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int alpha[26]={0,};
        cin >> h;
        int len = h.length();
        for(int j=0; j<len; j++)
        {
            int k= h[j]-97;
            if(j==0)
            alpha[k] +=1;
            else if(j>0 && h[j]!=h[j-1]){
            alpha[k] +=1;}
            else true;
        }
        for(int i=0; i<26; i++)
        {
            if(alpha[i]>1)
            {
                add++;
                break;
            }
            else true;
        }
    }
    cout << n-add;
}