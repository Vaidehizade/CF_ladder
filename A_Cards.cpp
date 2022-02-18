#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt1=0,cnt2=0; cin>>n;
    string s; cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'z') cnt1++;
        if(s[i] == 'n') cnt2++;
    }
    while(cnt2--) cout<<1<<" ";
    while(cnt1--) cout<<0<<" ";
}