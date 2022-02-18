#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,a,b; cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int ans=0,diff;
        diff = abs(a-b);
        //cout<<(a/5)+(a%5+1)/2<<endl;
         ans = ans + diff/5;
         diff = diff%5;
         ans = ans + diff/2;
         diff = diff%2;
         ans = ans + diff;
         cout<<ans<<endl;
    }
}