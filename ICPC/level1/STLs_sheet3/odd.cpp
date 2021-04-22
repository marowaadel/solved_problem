#include<bits/stdc++.h>
using namespace std;
int t,n,res;
long long x;
map <long long,int>mp;
map <long long,int>::iterator it;
int main()
{
    cin >>t;
    while (t--)
    {
        cin >>n;
        for (int i=0;i<n;i++)  
        {
            cin >>x;
            mp.insert(make_pair(x,0));
        }
        for (it=mp.begin();it!= mp.end();it++)
        {
            x=it->first;
            while(x %2==0)
            {
                if( mp[x] ==0) mp[x] =1;
                else break;
                x /=2;
                res ++;
            }
        }
        cout<<res<<endl;
        res=0; 
        mp.clear();
    }
    return 0;
}