#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum =0.0;
    cin >> n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    double top =arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>top)
        top=arr[i];
        else true;
    }
    for(int i=0; i<n; i++)
    {
        sum += arr[i]/top*100;
    }
    cout << sum/n;
    return 0;
}