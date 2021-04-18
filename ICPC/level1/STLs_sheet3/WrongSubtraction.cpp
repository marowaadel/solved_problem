#include<bits/stdc++.h>
using namespace std;
int k,n;
//vector<int>v1,v2;
int main()
{
    cin >>n>>k;
    while (k--)
    {
        if (n%10) n--;
        else n/=10;
    }
    cout <<n<<endl;
    return 0;
}