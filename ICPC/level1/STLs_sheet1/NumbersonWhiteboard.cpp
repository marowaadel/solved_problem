#include<bits/stdc++.h>
using namespace std;
int t,n;
vector<int>v;
vector<int>s;
int main()
{
    cin>>t;
    while(t--)
    {
        cin >>n;
        if(n==2)
        {
            cout<<"2"<<endl;
            cout<<"1 "<<"2"<<endl; 
        }
        else
        {
            cout<<"2"<<endl;
            cout<<n-2<<" "<<n<<endl; 
            cout<<n-1<<" "<<n-1<<endl;
            n--;
            for(int i=n;i>=3;i--)
            {
                cout<<i<<" "<<i-2<<endl;
            }
        }
       /*
        int i=1;
        while(i<=n)
        {
            v.push_back(i);
            i++;
        }
        int x;
        for(i=0;i<v.size()-1;i+=2)
        {
            s.push_back(v[i]);
            s.push_back(v[i+1]);
            x=(v[i]+v[i+1])/2;
            v.push_back(x);
        }
        cout<<x<<endl;
        for(i=0;i<s.size()-1;i+=2)
        {
            cout<<s[i]<<" "<<s[i+1]<<endl;
        }
        */
        
    }
    return 0;
}