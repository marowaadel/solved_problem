#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int sum_anto=0;
   int sum_danik=0;
   cin >>n ;
    for(int i=0;i<n;i++){
            char c;
        cin >>c;
          if(c == 'A')
            sum_anto +=1;
          else
            sum_danik +=1;
    }
    if(sum_anto > sum_danik)
        cout << "Anton" << endl;
    else if(sum_danik > sum_anto)
        cout << "Danik" << endl;
    else
        cout<< "Friendship"<< endl;
    return 0;
}
