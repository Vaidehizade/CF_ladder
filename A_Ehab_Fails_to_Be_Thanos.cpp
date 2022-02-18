#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int>v;
    int num,sum=0;
    for(int i=0; i<2*n; i++)
    {
        cin>>num;
        v.push_back(num);
        sum += v[i];
    }
    int flag=0;
    sort(v.begin(), v.end());
    for(int i=0; i<2*n-1; i++)
    {
        if(v[i]!= v[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    {
        for(int i=0; i<2*n; i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else if(flag ==0)
    {
        cout<<-1<<endl;
    }

}