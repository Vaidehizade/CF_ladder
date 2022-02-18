#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    for(int i=2; i<=n;i++)
    {
        if((i+1)%i!=0)
        {
            cout<<(i+1)<<" "<<i<<endl;
        }
    }
}