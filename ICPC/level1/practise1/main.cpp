#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    int sm=0;
    int arr[n];
    for (int i=0;i<n;i++)
        cin >>arr[i];
    for (int i=0;i<k;i++)
        sm+=arr[i];
    int mn=sm;
    int indx=1;
    for (int i=k;i<n;i++)
    {
        sm+=arr[i]-arr[i-k];
        if (sm<mn)
        {
            mn=sm;
            indx=i-k+2;
        }
    }
    cout << indx << endl;
    return 0;
}
