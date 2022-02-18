#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,cnt=0; cin>>n;
    vector<int>v;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v.push_back(num);
    }
    for(int i=0; i<n; i++)
        if(v[i]>0)
              mp[v[i]]++;
    //cout<<mp.size()<<endl;          
    for(int i=0; i<mp.size(); i++)
        cnt++;
    cout<<cnt<<endl;  
}
    
    
