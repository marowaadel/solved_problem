#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int n=s.size();
    int arr[n];
    arr[0]=0;
    for (int i=0; i < n-1 ;i++)
    {
        if (s[i] == s[i+1])
            arr[i+1] = arr[i] +1;
        else
            arr[i+1] = arr[i];
    }
   // for (int i=0;i<n;i++)
     //  cout << arr[i] << " " ;
    int q;
    cin >>q;
    while(q--)
    {
        int l,r;
        cin >>l>>r;
        l--;
        r--;
        cout << arr[r]-arr[l] << endl;
    }
    return 0;
}
