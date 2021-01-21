#include <bits/stdc++.h>
using namespace std;

int main()
{
    int freq1[26]={0};
    int freq2[26]={0};
    string s;
    for (int i=0;i<2;i++)
    {
        cin >>s;
        for (int j=0;j<s.size();j++)
        {
            s[j]-=65;
            freq1[s[j]]++;
        }
    }
    cin >>s;
    for (int j=0;j<s.size();j++)
        {
            s[j]-=65;
            freq2[s[j]]++;
        }
    for (int i=0;i<26;i++)
    {
        if (freq1[i] != freq2[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
