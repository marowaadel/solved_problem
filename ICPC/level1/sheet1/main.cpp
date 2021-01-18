#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    int x=0,y=0,z=0;
    for (int i=0;i<n;i++)
    {
        int arr[3];
        for (int j=0;j<3;j++)
        {
            cin >>arr[j];
        }
        x+=arr[0];
        y+=arr[1];
        z+=arr[2];
    }
    if (x == 0 && y==0 && z==0)
      cout << "YES" << endl;
    else
     cout << "NO" << endl;
    return 0;
}
