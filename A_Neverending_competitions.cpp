#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int temp =n;
    string s; cin>>s;
    vector<string>v;
    while(n--)
    {
        string ans; cin>>ans;
        v.push_back(ans);
    }
    // string temp = v[v.size()-1];
    // string temp2 = v[0];
    // string h = temp.substr(5,4);
    // string t = temp2.substr(0,3);
    // if(h==t)
    // {
    //     cout<<"home"<<endl;
    // }
    // else
    // {
    //      cout<<"contest"<<endl;
    // }
    if(temp%2!=0)
    {
        cout<<"contest"<<endl;
    }
    else
    {
         cout<<"home"<<endl;
    }
}