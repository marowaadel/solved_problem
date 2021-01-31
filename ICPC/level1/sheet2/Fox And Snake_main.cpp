#include <bits/stdc++.h>
using namespace std;

int main()
{
  int row,col,i,j,c=0;
  cin>>row;
  cin>>col;
  char x[row][col];
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
            if (i%2 == 0)
            {
                x[i][j] ='#';
            }
            else
            {
                if (j == (col-1))
                {
                    if (c%2 == 0)
                    {
                        x[i][j]='#';
                    }
                    else
                    {
                        x[i][0] ='#';
                        x[i][j]='.';
                    }
                    c++;
                }
                else
                  x[i][j] ='.';
            }
    }
  }

for(i=0;i<row;i++){
    for(j=0;j<col;j++){
            cout << x[i][j] ;
    }
    cout <<endl;;
    }
    return 0;
}
