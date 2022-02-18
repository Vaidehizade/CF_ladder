#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;cin>>t;
    if(t<5)
    {
        cout<<0<<endl;
    }
    else
    {
        while(t%10!=0)
       { 
         if(t%10 <5)
         {
           t = t-1;  
         }
         else
         {
            t = t+1;  
         }
       }
       cout<<t<<endl;
    }
}