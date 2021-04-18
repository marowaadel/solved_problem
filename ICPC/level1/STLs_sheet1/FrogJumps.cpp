#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin >>t;
    while (t--)
    {
        string s;
        cin >>s;
        int ans=1,l=1;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='L') l++;
            else l=1;
            ans=max(ans,l);
        }
        cout <<ans<<endl;
    }
    return 0;
}