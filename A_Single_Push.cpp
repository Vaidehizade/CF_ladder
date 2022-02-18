#include<bits/stdc++.h>
using namespace std;

void repeat();
int main()
{
    repeat();
    return 0;
}
void repeat()
{
    int t; cin>>t;
    while(t--)
    {
        int n,num,flag=0; cin>>n;
        int v1[n], v2[n];
        for(int i=1; i<=n; i++)
        {
            cin>>v1[i];
        }
        int count=0;
        for(int i=1; i<=n; ++i){
            cin>>v2[i];
            v2[i] = v2[i] - v1[i];
            if(v2[i]>0 && v2[i]!=v2[i-1])
            {
                count++;
            }
            else if(v2[i]<0)
            {
                flag = true;
            }
        }
        cout << (((count > 1) || flag) ? "NO": "YES") << "\n";
        // for(int i=0; i<n; i++)
        // {
        //     cin>>num;
        //     v2.push_back(num);
        // }
        // for(int i=0,j=0; i<n,j<n; i++,j++)
        // {
        //     if(v1[i]!= v2[j])
        //     {
        //         ans.push_back(abs(v1[i]-v2[j]));
        //     }
        // }
        // if(ans.size()==0)
        // {
        //       cout<<"YES"<<endl;
        // }
        // else if(ans.size()==1)
        // {
        //     cout<<"NO"<<endl;
        // }
        // else
        // {
        //     for(int i=0; i<ans.size()-1; i++)
        //    {
        //     if(ans[i]!= ans[i+1])
        //     {
        //         flag=1;
        //         break;
        //     }
        //   }
        //    if(flag==0)
        //    {
        //     cout<<"YES"<<endl;
        //    }
        //    else
        //    {
        //     cout<<"NO"<<endl;
        //    }
        // }
    }
}