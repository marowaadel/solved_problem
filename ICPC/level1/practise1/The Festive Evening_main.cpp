#include <bits/stdc++.h>
using namespace std;
int freq[26];
int arr[26];
int main()
{
    int n,k;
    cin >>n>>k;
    string s;
    cin >>s;
    for (int i=0;i<n;i++)
    {
        s[i] -= 65;
        freq[s[i]] ++;
        s[i] +=65;
    }
    k--;
    for (int i=0;i<=n-1;i++)
    {
        int indx = s[i] -65;
        if (arr[indx]==0)
            arr[indx] =1;
        freq[indx] --;
        if (s[i+1] != s[i] && arr[s[i+1]-65] ==0)
            k--;
        if (freq[indx] ==0)
            k++;
        if (k<0)
        {
           cout << "YES" << endl;
           return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
