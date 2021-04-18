#include<bits/stdc++.h>
using namespace std;
int t,n,i,j;
vector<pair<int,int>>v;
int main()
{
    cin >>t;
    while (t--)
    {
        cin >>n;
        char a [n][n] ;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cin >>a[i][j];
                if(a[i][j]=='*') v.push_back(make_pair(i,j));
            }
        }
        //sort(v.begin(),v.end());
        if(v[0].first - v[1].first ==0)  //on same row
        {
            if (v[0].first == n-1)
            {
                a[v[0].first -1][v[0].second]='*';
                a[v[0].first -1][v[1].second]='*';
            }
            else
            {
                a[v[0].first +1][v[0].second]='*';
                a[v[0].first +1][v[1].second]='*';
            }
        }
        else if (v[0].second - v[1].second ==0) //on same colum
        {
            if (v[0].second == n-1)
            {
                a[v[0].first ][v[0].second-1]='*';
                a[v[1].first ][v[1].second-1]='*';
            }
            else
            {
                a[v[0].first ][v[0].second+1]='*';
                a[v[1].first ][v[1].second+1]='*';
            }
        }
        else
        {
            a[v[0].first ][v[1].second]='*';
            a[v[1].first ][v[0].second]='*';
        }
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cout <<a[i][j];
            }
            cout <<endl;
        }
        v.clear();
    }
    return 0;
}