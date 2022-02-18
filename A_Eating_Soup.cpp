#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
        cout<<0<<endl;
    else if(m==0)
        cout<<1<<endl;
    else 
       cout<<min(m,n-m)<<endl;
}
