#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,res=0,res1=0,res2=0; cin>>a>>b;
    int red = a*2,green = a*5,blue = a*8;
    (red%b!=0)? res = (red/b +1):res = red/b;
    (green%b!=0)?res1 = (green/b +1): res1 = green/b;
    (blue%b!=0)?res2 = (blue/b +1):res2 = blue/b;
    
    cout<<res1+res2+res<<endl;
    
}