//link problem
//https://codeforces.com/problemset/problem/231/A



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sump=0;
    cin >>n;
    for (int i=0;i<n ; i++)
    {
        int sum=0;
          for (int j=0;j<3 ; j++)
          {
              int x;
              cin >>x;
              sum +=x;
          }
          if (sum >= 2)
            sump ++;
    }
    cout << sump<< endl;
    return 0;
}
