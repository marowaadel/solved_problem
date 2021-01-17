#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int freq[26]={0};
    int sum=0;
    for (int i=0;i<s.size();i++)
    {
        s[i] -= 97;
        freq[s[i]] =1;
    }
    for (int i=0;i<26;i++)
    {
        if (freq[i] >0)
            sum ++;
    }
    if(sum %2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
       cout << "IGNORE HIM!" << endl;
    return 0;
}
