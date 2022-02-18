#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,sum; cin>>n>>v;
    if((n-v) == 1)
    {
      cout<<v<<endl;
    }
    else if((n-v) == 2)
    {
       cout<<n<<endl;
    }
    else if( v>=n)
    {
      cout<<n-1<<endl;
    }
    else
    { 
       int a = n-v;
       //cout<<(a*(a+1))/2<<endl;
       sum = (v-1)+((a*(a+1))/2);
       cout<<sum<<endl;
    }
}
