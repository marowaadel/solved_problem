#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,i,sump=0,sumc=0;
    cin >>n;
    int arr[n];
    for (i=0;i<n;i++)
        cin >>arr[i];
    for (i=0;i<n;i++)
    {
        if (arr[i] >0)
            sump +=arr[i];
        else
        {
            if (sump >0)
                sump --;
            else
                sumc ++;
        }
    }
    cout << sumc << endl;
    return 0;
}
