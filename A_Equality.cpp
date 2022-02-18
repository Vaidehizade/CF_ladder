#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,found=0; cin>>n>>c;
    string s;cin>>s;
    vector<int>v;
    map<char,int>mp;
    set<char>st;
    for(int i=0; i<s.size(); i++)
    {
        st.insert(s[i]);
    }
    if(st.size()!=c)
    {
      cout<<0<<endl;
    }
    else
    {
              for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto x: mp)
    {
        v.push_back(x.second);
    }
    int mins = *min_element(v.begin(),v.end());
    cout<<mins*c<<endl;
    }
       



}