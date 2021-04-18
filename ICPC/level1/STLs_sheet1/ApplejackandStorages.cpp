#include<bits/stdc++.h>
using namespace std;
const int s=1e5+5;
int f[s];
int n,q,i,u,t;
int main()
{
    cin >>n;
    int j=0;
    for (i=0;i<n;i++) 
    {
        int x;
        cin >>x;
        u -= (f[x]/4);
        t -= (f[x]/2);
        f[x]++;
        u += (f[x]/4);
        t += (f[x]/2);
    }
    cin >>q;
    while (q--)
    {
        char c;
        int x;
        cin >> c >>x;
        if (c=='+')
        {
           u -= (f[x]/4);
           t -= (f[x]/2);
           f[x]++;
           u += (f[x]/4);
           t += (f[x]/2);
        }
        else
        {
            u -= (f[x]/4);
            t -= (f[x]/2);
            f[x]--;
            u += (f[x]/4);
            t += (f[x]/2);
        }
        cout << (u>=1 && t>=4 ? "yes" : "no" )<<endl;
    }
    return 0;
}