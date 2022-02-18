#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,num; cin>>n>>m>>k;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v.push_back(num);
    }
    int ans = v[m-1];
    vector<int>res,temp;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] <= k && i!= (m-1) && v[i]!=0)
        {
            res.push_back(i+1);
        }
    }
    // for(int i=0; i<res.size(); i++)
    // {
    //     cout<<res[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0; i<res.size(); i++)
    {
       temp.push_back(abs(m-res[i]));
    }
    int mins = *min_element(temp.begin(), temp.end());
    cout<<10*mins<<endl;

}