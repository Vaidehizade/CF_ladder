#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num; cin>>n;
    vector<int>arr,v;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    // vector<int>::iterator it;
    // it = unique(arr.begin(), arr.end());
    // arr.resize(distance(arr.begin(), it));
    for(int i=0; i<arr.size();i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[i]==0)
            {
                break;
            }
            if(arr[j]%arr[i]==0)
            {
                arr[j]=0;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n; i++)
    {
        if(arr[i]!=0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}