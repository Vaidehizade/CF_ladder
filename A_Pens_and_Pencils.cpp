#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
    int a,b,c,d,k,x=0,y=0; cin>>a>>b>>c>>d>>k;
        if(a%c==0)
            x=a/c;
        if(a%c!=0)
            x=a/c+1;
        if(b%d==0)
            y=b/d;
        if(b%d!=0)
            y=b/d+1;
        if((x+y)>k)
            cout<<"-1"<<endl;
        if((x+y)<=k)
            cout<<x<<" "<<y<<endl;
    }

}