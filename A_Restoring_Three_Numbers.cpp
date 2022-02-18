#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v;
    int num;
    for(int i=0; i<4; i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end(), greater<int>());
    if(v[1]== v[2] && v[2]==v[3] && v[1]==v[3])
    {
        cout<<v[0]/3<<" "<<v[0]/3<<" "<<v[0]/3<<endl;
    }
    else
    {
        // int a = v[0]/3;
        // int b = abs(v[1]-a);
        // cout<<abs(v[0]-(a+b))<<" "<<b<<" "<<a<<endl;
        cout<<v[0]-v[1]<<" "<<v[0]-v[2]<<" "<<v[0]-v[3]<<endl;
    }
    
}