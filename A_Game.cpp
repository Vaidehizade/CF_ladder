#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout<<v[n/2]<<endl;

}