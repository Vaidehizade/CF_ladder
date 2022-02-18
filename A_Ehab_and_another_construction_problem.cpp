#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
    }
    else if(n==2)
    {
         cout<<2<<" "<<2<<endl;
    }
    else
    {
        int j=1,i=n-1;
       while(i>=1)
       {
          if((i*j > n) && (i/j < n) && (i%j ==0))
          {
              cout<<i<<" "<<j<<endl;
              i--;
              break;
          }
          j++;
       }
    }
    
}