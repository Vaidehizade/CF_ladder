#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a,pair<int, int>& b)
{
    return a.second < b.second;
}
int main()
{
    int n,m; cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<m; i++) cin>>brr[i];
    unordered_map<int,int>mp;
    for(int j=0; j<m; j++)
    {
       for(int i=0; i<n; i++)
       {
          if(arr[i] == brr[j])
           {
              mp[arr[i]] = i;
           }
        
       }
    }
    vector<pair<int, int> > A;
    for (auto& it : mp) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for(auto x:A)
    {
        cout<<x.first<<" ";
    }
}