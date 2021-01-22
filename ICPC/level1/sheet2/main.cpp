#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >>n>>k;
    long long arr[n+1];
    arr[0]=0;
    for (int i=1 ;i<=n;i++)
    {
        cin >>arr[i];
        arr[i]+=arr[i-1];
    }
    int mn=INT_MAX;
    int indx=0;
     for (int l=1 ;l<= n-k+1 ;l++)
     {
         int r=l+k-1;
         int sm=arr[r]-arr[l-1];
         if (sm<mn)
         {
             mn=sm;
             indx=l;
         }
     }
    cout << indx<< endl;
    return 0;
}
