#include <bits/stdc++.h>
using namespace std;
int main()
{
    int degit;
    long long n;
    cin >>n;
    if (n ==0) degit=1;
    else if (n%4 ==0) degit =6;
    else if (n%4 ==2) degit =4;
    else if (n%4 ==1) degit =8;
    else degit =2;
    /*
    x=pow(1378,n);
    y=pow(1378,n);
    x+=1;
    degit=x%10;
    */
    cout << degit << endl;
    //cout << x << endl;
    //cout << y << endl;
    return 0;
}
