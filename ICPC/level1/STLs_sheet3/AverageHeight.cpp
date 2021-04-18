#include<bits/stdc++.h>
using namespace std;
int t,n;
vector<int>v1,v2;
int main()
{
    cin >>t;
    while (t--)
    {
        cin >>n;
        for (int i=0;i<n;i++)
        {
            int x;
            cin >>x;
            if (x%2 ==0) v2.push_back(x);
            else v1.push_back(x);
        }
        sort(v1.rbegin(),v1.rend());
        sort(v2.rbegin(),v2.rend());
        for (int i=0;i<v1.size();i++)  cout <<v1[i]<<" ";
        for (int i=0;i<v2.size();i++)  cout <<v2[i]<<" ";
        v1.clear();
        v2.clear();
    }
    return 0;
}