#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,sum=0,res; cin>>n;
    // vector<int>v;
    // int temp = n;
    // int i=3;
    // while(i--)
    // {
    //    res = temp/2;
    //    //cout<<res<<endl;
    //     if(res%3!=0)
    //     {
    //         v.push_back(res);
    //         temp = temp-res;
    //     }
    // }
    // v.push_back(n-temp);
    // for(int i=0; i<n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    if(n%3==0)
    {
        cout<<1<<" "<<1<<" "<<(n-2)<<endl;
    }
    else
    {
         cout<<1<<" "<<2<<" "<<(n-3)<<endl;
    }
}