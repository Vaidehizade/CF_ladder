#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,cnt2=0; cin>>n;
    string s; cin>>s;
    
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] == 'S' && s[i+1]== 'F') cnt++;
        if(s[i] == 'F' && s[i+1]== 'S') cnt2++;
    }
    if(cnt>cnt2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}