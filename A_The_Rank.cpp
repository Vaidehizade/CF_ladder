#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,sum=0; cin>>n;
    vector<int>v;
    cin>>a>>b>>c>>d;
    sum = a+b+c+d;
    for(int i=1; i<n; i++)
    {
         cin>>a>>b>>c>>d;
         v.push_back(a+b+c+d);
    }
    v.push_back(sum);
    sort(v.begin(), v.end(), greater<int>());
    int found =0, pos=0;
     for(int i=0; i<n; i++)
    {
       if(v[i] == sum)
       {
           pos = i+1;
           found =1;
           break;
       }
    }
    if(found==1)
    {
        cout<<pos<<endl;
    }
}