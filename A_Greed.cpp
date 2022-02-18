#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,nums,i; cin>>n;
    vector<int>v,vec;
    long long  sum =0;
    int cap=0,flag=0;
    for(i=0; i<n; i++)
    {
        cin>>num;
        v.push_back(num);
        sum += v[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>nums;
        vec.push_back(nums);
    }
    sort(vec.begin(), vec.end());
    cap  = vec[vec.size()-1] + vec[vec.size()-2];
    if(sum > cap)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}