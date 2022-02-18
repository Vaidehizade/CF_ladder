#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    while(a>=1 && b>=2 && c>=4)
    {
        a = a-1;
        b = b-2;
        c = c-4;
        cnt = cnt+7;
    }
    cout<<cnt<<endl;

}