#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c; cin>>n;
    int cnt;
    while(n--)
    {
        cin>>a>>b>>c;
        cnt=0;
        while(b>0 && c>1)
            {
                b = b-1;
                c = c-2;
                cnt = cnt+3;
            }
         while(a >0 && b>1)
            {
                 b= b-2;
                 a = a-1;
                 cnt = cnt+3; 
            }
            cout<<cnt<<endl;
        }
    }
