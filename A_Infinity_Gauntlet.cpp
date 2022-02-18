#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    string s;
    map<string,string>mp;
        mp["purple"] = "Power";
        mp["green"] = "Time";
        mp["blue"] = "Space ";
        mp["orange"] = "Soul";
        mp["red"] = "Reality";
        mp["yellow"] = "Mind";
    cout<<(6-t)<<endl;
    for(int i = 0; i < t; i++)
    {
        cin>>s;
        mp[s] = "x";
    }
    
    for(auto it = mp.begin(); it != mp.end(); it++)
    {

        if(it->second != "x")
            cout<< it->second <<endl;
    }
}