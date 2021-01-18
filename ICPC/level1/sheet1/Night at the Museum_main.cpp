#include <bits/stdc++.h>
using namespace std;
int sum =0;
int main()
{
    string s;
    int i,start;
    cin >>s;
    start='a';
    for (i=0;i<s.size();i++)
    {
        char c=s[i];
        int m1,m2;
        m1=abs(c-start);  //clockwise
        m2=abs(26-m1);   //anti clockwise
        sum += min(m1,m2);
        start=c;
    }
     cout << sum << endl;
    return 0;
}
