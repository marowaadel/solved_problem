#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >>s1>>s2;
    bool v=false;
    if(s1.length()!=s2.length())
    {
        if(s1.length()>s2.length()) cout <<s1.length()<<endl;
        else cout <<s2.length()<<endl;
        return 0; 
    }
    else
    {
       /* if(s1.length()==1 && s1[0]==s2[0])
        {
            cout <<-1<<endl;
            return 0;
        } */
        for (int i=0;i<s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                v=true;
                break;
            } 
        }
    }
    if(v) cout <<s1.length()<<endl;  
    else cout <<-1<<endl;
    return 0;
}