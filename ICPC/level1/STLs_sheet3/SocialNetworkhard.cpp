#include<bits/stdc++.h>
using namespace std;
int n,k;
queue<long long>q;
set<long long>st;
vector<long long>v;
vector<long long>::reverse_iterator rit;
int main()
{
    cin >>n>>k;
    long long a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++)
    {
        if(st.count(a[i]) ) continue; //element is exist
        if(k) k--; 
        else
        {
           st.erase(q.front());
           q.pop();
        }
        q.push(a[i]);
        st.insert(a[i]);
    }
    while (q.empty() ==0) 
    {
        v.push_back(q.front());
        q.pop();
    }
    cout<<v.size()<<endl;
    for (rit=v.rbegin();rit!=v.rend();rit++) cout<<*rit<<" ";
    return 0;
}