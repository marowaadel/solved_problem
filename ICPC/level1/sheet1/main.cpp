#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,x;
    cin >>n>>k;
    while (n--)
    {
        cin >>x;
        if (x>k)
            sum ++;
    }
    cout << sum << endl;
    return 0;
}
