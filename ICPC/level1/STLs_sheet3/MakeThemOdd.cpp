#include<bits/stdc++.h>
using namespace std;
int t,n,res;
map <long long,int>mp;
int main()
{
    cin >>t;
    while (t--)
    {
        cin >>n;
        long long a[n];
        for (int i=0;i<n;i++)  cin >>a[i];
        for (int i=0;i<n;i++)
        {
            while(a[i]%2==0)
            {
                if( mp.count(a[i]) ==0) mp.insert(make_pair(a[i],1));
                else break;
                a[i]/=2;
                res ++;
            }
        }
        cout<<res<<endl;
        res=0; 
        mp.clear();
    }
    return 0;
}