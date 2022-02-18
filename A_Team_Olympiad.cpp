#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,num,found=0; cin>>n;
    vector<int>v,p,z;
    for(int i=1; i<=n; i++)
    {
        cin>>num;
        if(num==1)
        {
              v.push_back(i);
        }
        else if(num==2)
        {
             p.push_back(i);
        }
        else if(num==3)
        {
             z.push_back(i);
        }
    }
    int s = min({v.size(), p.size(), z.size()});
    cout<<s<<endl;
    for(int i=0; i<s; i++)
    {
        cout<<v[i]<<" "<<p[i]<<" "<<z[i]<<endl;
    } 
}