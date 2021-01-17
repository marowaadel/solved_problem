#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,x;
    cin >>n>>k;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    x=arr[k-1];
    for (int i=0;i<n;i++)
    {
        if (arr[i] >= x && arr[i] >0)
            sum ++;
    }
    cout << sum << endl;
    return 0;
}
