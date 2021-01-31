#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    n number of times she will travel
    m number of travels in special tickets
    a price of one ride tickets
    b price of special tickets
    t1 total of travel with one ride tickets
    t2 total of travel with special tickets
    */
    int n,m,a,b,t1,t2,t;
    cin >>n>>m>>a>>b;
    t1= a*n;
    if (n<=m)
        t2=b;
    else
    {
        t2=n/m;
        t=n-t2*m;
        t2*=b;
        t2+=min((t*a),(b));
    }
    cout << min(t1,t2) << endl;
    return 0;
}
