
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve();
signed main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
  
   int t=1;
   cin>>t;
   while(t--)
   {
      solve();
   }
   return 0;
}

void solve(){
    string s; int i;
    char j;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='?')
        for(j='a';j<='c';j++){
            if(s[i-1]!=j && s[i+1]!=j) s[i]=j;
        }
        else if(s[i]==s[i+1]) s="-1";
    }
    cout<<s<<endl;
}