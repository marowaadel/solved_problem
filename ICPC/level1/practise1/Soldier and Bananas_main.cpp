#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,w,n,b,i,sum=0;
    cin >>k >>n>>w;
    for (i=1;i<=w;i++)
        sum +=i*k;
    if (sum >n)
        b=sum-n;
    else
        b=0;


    cout << b << endl;
    return 0;
}
