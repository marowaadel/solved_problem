#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int sm=0;
vector<pair<int,int>>h;
int main()
{
    int n,h1,w1;
    cin >>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >>a[i]>>h1;
        sm+=a[i];
        h.push_back(make_pair(h1,i));
    }
    sort(h.begin(),h.end());
    for(int i=1;i<=n;i++) 
    {
        w1=sm-a[i];
        for(int j=h.size()-1;j>=0;j--) 
        {
            if(h[j].second!=i) 
            {
                h1=h[j].first;
                break;
            }
        }
       // cout <<h1<<" "<< w1<<endl;
        cout <<h1*w1<<" " ;
    }
    return 0;
}