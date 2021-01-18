#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n ,sump=0,sumc=0;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        if (x >0)
            sump +=x;
        else
        {
            if (sump >0)
                sump --;
            else
                sumc ++;
        }
    }
    cout << sumc << endl;
    return 0;
}
