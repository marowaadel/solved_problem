#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    string s;
    cin >>n;
    cin >>s;
    char c[n];
    for (i=0;i<n;i++)
    {
       c[i]=s[i];
    }
    for (i=1;i<=n;i++)
    {
        if (c[i] == c[i-1])
            sum +=1;
    }
    cout << sum << endl;
    return 0;
}
