#include<bits/stdc++.h>
using namespace std;


int main()
{
     int n,k,t; cin>>n>>k>>t;
     if(n>=t)
     {
          if(t<=k)
         {
           cout<<t<<endl;
         }
         else
         {
             cout<<k<<endl;
         }
     }
     else
     {
         cout<<n-t+k<<endl;
     }
}
 