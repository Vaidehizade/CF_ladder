#include<bits/stdc++.h>
using namespace std;

void repeat();
int main()
{
    repeat();
    return 0;
}
void repeat()
{
    int n,a,b,c; cin>>n>>a>>b>>c;
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    { 
     int sum=0;
     int res = min(a,b);
      res= min(res,c);
      if(res==a)
      {
          sum = a*(n-1);
      }
      else if(res == b)
      {
         sum = b*(n-1);
      }
      else if(res==c)
      {
          int k = min(a,b);
          sum= k+((n-2)*c);
      }
      cout<<sum<<endl;
         
    }
}