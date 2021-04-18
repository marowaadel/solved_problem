#include <bits/stdc++.h>
using namespace std;
vector<int>v;
bool isfound(vector <int> v,int k)
{
    int i=0 ,c;
    int arr[k+1];
    for (i=0;i<=k;i++)
    {
        arr[i] =i;
    }
    for (i=0;i<=k;i++)
    {
        c = count(v.begin(),v.end(),arr[i]);
        if (c==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,k,i,sum=0,x;
    cin >>n>>k;
    for (i=0;i<n;i++)
    {
        cin >>x;
        while (x)
    {
        v.push_back(x%10);
        x /=10;
    }
    if (isfound(v,k) ==1)
        sum +=1;
    v.clear();
    }
    cout <<sum ;
    return 0;
}
