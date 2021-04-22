#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<long long>v;
int main()
{
    
    cin >>n>>k;
    long long a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++)
    {
        if(k && find(v.begin(),v.end(),a[i]) ==v.end())
        {
            v.insert(v.begin(),a[i]); //new id
            k--;
        } 
        else if(find(v.begin(),v.end(),a[i]) !=v.end()) continue;
        else
        {
            v.pop_back();
            v.insert(v.begin(),a[i]);
        }
    }
    cout<<v.size()<<endl;
    for (int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}






















/*
#include<bits/stdc++.h>
using namespace std;
int n,k;
set<long long>st;
set<long long>::reverse_iterator it;
set<long long>::iterator t=st.begin();
int main()
{
    cin >>n>>k;
    long long a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    t=st.begin();
    for (int i=0;i<n;i++)
    {
        if(st.size()!=k && st.find(a[i]) ==st.end()) st.insert(a[i]); //new id
        else if(st.find(a[i]) !=st.end()) continue;
        else
        {
            st.insert(a[i]);
           // cout<<i<<endl;
          //  cout<<*st.begin()<<endl;
            st.erase(t);
           // cout<<st.size()<<endl;
            t++;
        }
        //cout<<k<<endl;
    }
    cout<<k<<endl;
    for (it=st.rbegin();it!=st.rend();it++) cout<<*it<<" ";
    return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
int k,n;
long long x;
list<long long>l;
list<long long>::iterator it;
map<long long,int>mp;
int main()
{
    cin >>n>>k;
    for(int i=0;i<n;i++)
    {
        cin >>x;
        if(mp.count(x)==0) mp.insert(make_pair(x,0));
        it=l.end();
        it;
        if (l.size()==k && mp[x]==0 )
        {
            mp[*it]=0;
            l.pop_back();
            l.push_front(x);
            mp.insert(make_pair(x,1));
            //cout<<l.size()<<endl;
        }
        else if (l.size()!=k && mp[x]==0) l.push_front(x);
       for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
        cout<<endl;
    }
   // cout<<l.size()<<endl;
    cout<<k<<endl;
    for(it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
*/