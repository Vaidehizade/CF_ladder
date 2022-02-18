#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,num; cin>>t;
    while(t--)
    {
        cin>>n;
        int cnt=0;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end(),greater<int>());
        int j=0;
         for(int i=0; i<n; i++)
        {
            if(v[i]>= i+1)
            j++;
        }
       cout<<j<<endl;

    }
}

//5 4 4 3 1