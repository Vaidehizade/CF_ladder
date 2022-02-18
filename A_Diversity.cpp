#include<bits/stdc++.h>
using namespace std;

void repeat();
int main()
{
    repeat();
    return 0;
}
void repeat()
{
    string s; cin>>s;
    int k; cin>>k;
    if(s.size()<k)
    {
        cout<<"impossible"<<endl;
    }
    else
    {
       set<char>st;
       for(auto x: s)
       {
           st.insert(x);
       }
       int ans = max(0,k-(int)st.size());

       cout<<ans<<endl;
    }
}