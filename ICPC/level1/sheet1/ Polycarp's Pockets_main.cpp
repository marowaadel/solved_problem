#include <bits/stdc++.h>
using namespace std;

int main()
{
    int freq [101]={0};
    int n;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        freq[x] ++;
    }
    int minn=freq[0];
    for (int i=1;i<101;i++)
    {
        if (freq[i] > minn )
            minn =freq[i];
    }
    cout << minn<< endl;
    return 0;
}
