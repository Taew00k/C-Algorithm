#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101];
    char alphabet[27];
    int arr[27];
    cin >> s;
    for (int i = 0; i < 26; i++) 
    {
    arr[i] = -1;
    }
    for(int i=97; i<123; i++)
    {
        alphabet[i-97]= i;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=strlen(s)-1; j>=0; j--)
        {
            if(alphabet[i]==s[j]){
                arr[i]=j;
            }
            else true;
        }
    }
    for(int i=0; i<26; i++)
    {
        cout << arr[i] << " ";
    }
}