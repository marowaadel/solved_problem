#include<bits/stdc++.h>
using namespace std;
int t;
long long p,a,b,c;
int main()
{
    cin >>t;
    while (t--)
    {
        cin >>p>>a>>b>>c;
        //p came in no x of  iteration 
        cout <<(min(((a+p-1)/a)*a-p,min(((b+p-1)/b)*b-p,((c+p-1)/c)*c-p)))<<endl;
    }
    return 0;
}