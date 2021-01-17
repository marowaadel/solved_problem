#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    string s;
    cin >>n;
    cin >>s;
    for (i=1;i<=n;i++)
    {
        if (s[i] == s[i-1])
            sum +=1;
    }
    cout << sum << endl;
    return 0;
}
