#include<bits/stdc++.h>
using namespace std;
int n,res=INT_MIN;
string s;
map<string,int>mp;
map<string,int>::iterator t=mp.begin();
int main()
{
    cin >>n;
    for (int i=0;i<n;i++)
    {
        cin>>s;
        if (mp.count(s)) mp[s]++;
        else mp.insert(make_pair(s,1));
    }
    t=mp.begin();
    n=t->second;
    s=t->first;
    while (t!=mp.end())
    {
        t++;
        if(t->second > n)
        {
            n=t->second;
            s=t->first;
        }
    }
    cout<<s<<endl;
    return 0;
}