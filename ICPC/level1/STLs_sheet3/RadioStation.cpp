#include <bits/stdc++.h>
using namespace std;
vector <pair<string,string>>v;
int main()
{
    int n,m;
    string s,ip;
    cin >>n>>m;
    for (int i=0;i<n;i++){
            cin >>s >>ip;
            ip+=';';
            v.push_back(make_pair(s,ip));
    }
    for (int i=0;i<m;i++){
            cin >>s>>ip;
            v.push_back(make_pair(s,ip));
    }
    /*
    unordered_map<string,string>m1;
     unordered_map<string,string>m2;
     unordered_map<string,string>::iterator it1=m1.begin();
     unordered_map<string,string>::iterator it2=m2.end()-1;
    for (it1=m1.begin();it1 != m1.end();it1++)
        cout << it1 -> first << " "<<it1 -> second  <<endl;
    
    it1=m1.begin();
    it2=m2.begin();
    s=  it1->second;
    cout << s<<endl;
    it2=m2.find(s);
    s+= " #";
    s+= it2->second;
    cout << s<<endl;
    */
    for (int i=n ;i <n+m;i++)
    {
        int j=0;
                for ( j=0 ;j <n;j++)
                {
                    if (v[i].second== v[j].second) break;
                }
                cout << v[i].first << " "<<v[i].second << " #"<<v[j].first <<endl;
    }
    return 0;
}
