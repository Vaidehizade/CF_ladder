#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,k=0; cin>>n;
    string s; cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '-')
            k++;
    }
    if(k == s.size())
        cout<<0<<endl;
    else
    {
       for(int i=0; i<s.size(); i++)
       {
         if(s[i] == '+')
            cnt++;
         else
         {
             if(cnt ==0)
             {
             }
             else
                 cnt--;
         }
       }
       cout<<cnt<<endl;
    }

}