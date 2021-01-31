#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int arr2[4][4];
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cin >>c;
            if (c=='#')
                arr2[i][j] =1;
            else
                arr2[i][j] =0;
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            arr2[i][j] += arr2[i][j+1] +arr2[i+1][j] + arr2[i+1][j+1];
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (arr2[i][j] ==0 || arr2[i][j] ==4 || arr2[i][j] ==3 || arr2[i][j] ==1 )
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
