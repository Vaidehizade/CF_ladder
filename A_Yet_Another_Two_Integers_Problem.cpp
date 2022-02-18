#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    int a,b;
    cin>>a>>b;
    int ans = abs(a-b);
      int s  = ceil(ans/(double)10);
      cout<<s<<endl;
    }
}