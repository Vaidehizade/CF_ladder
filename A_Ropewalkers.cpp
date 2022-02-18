#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,d;
    vector<int>v;
    for(int i=0; i<3; i++)
    {
     cin>>num;
     v.push_back(num);
    }
    cin>>d;
    int cnt=0;
    sort(v.begin(),v.end());
        if(abs(v[1]-v[0]) < d && abs(v[2]-v[1])< d)
        {
             cnt=abs(d-(v[1]-v[0]))+abs(d-(v[2]-v[1]));
             cout<<cnt<<endl;
        }
        else if(abs(v[1]-v[0]) <d)
        {
           int diff = abs(v[1]-v[0]);
           cnt += (d-diff);
           cout<<cnt<<endl;
        }
        else if(abs(v[2]-v[1])< d)
        {
          int di = abs(v[2]-v[1]);
          cnt+= (d-di);
          cout<<cnt<<endl;
        }
        else
        {
            cout<<0<<endl;
        }

}