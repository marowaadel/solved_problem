#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,num=0;
    ll x,d;
    char c;
    cin >>n>>x;
    for (int i=0;i<n;i++)
    {
        cin >>c>>d;
        if (c=='+')
            x+=d;
        else
        {
            if (x>=d)
                x-=d;
            else
                num++;
        }
    }
    cout << x <<" " << num << endl;
    return 0;
}
