#include<bits/stdc++.h>
using namespace std;


int main()
{
    unsigned long long int n,k; cin>>n>>k;
    // while( i<n)
    // {
    //     cnt++;
    //     i= (i+k+k);
    // }
    // if(cnt%2!=0)
    // cout<<"YES"<<endl;
    // else
    // cout<<"NO"<<endl;
    //   cnt= n-(k*2);
    // if(n==k)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else if(cnt%2==0)
    // {
    //    cout<<"NO"<<endl;
    // }
    // else
    // {
    //     cout<<"YES"<<endl;
    // }
    if((n/k)%2==0)
    {
       cout<<"NO"<<endl;
    }
    else
    {
         cout<<"YES"<<endl;
    }
}