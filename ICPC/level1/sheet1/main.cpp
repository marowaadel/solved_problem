#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    string s;
    cin >> s;
    int freq[26]={0};
    for (int i=0;i<n;i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] -=97;  //small char
        else
            s[i] -=65;   //32-97
        freq[s[i]] =1;
    }
    for (int i=0;i<26;i++)
    {
        if(freq[i] <1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
