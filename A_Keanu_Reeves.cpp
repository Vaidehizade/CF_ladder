#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    string s; cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '0')
        {
            cnt++;
        }
    }
    cout<<"no of 0s: "<<cnt<<endl;
    cout<<"no of 1s: "<<s.size()-cnt<<endl;
    if(cnt!= (s.size()-cnt))
    {
        cout<<1<<endl<<s<<endl;
    }
    else
    {
            if(s.size()==1 && s=="1")
           {
              cout<<1<<endl<<1<<endl;
           }
            else if(s.size()==1 && s=="0")
          {
         cout<<0<<endl<<0<<endl;
          }
        else 
        {
         cout<<2<<endl;
         for(int i=0; i<s.size()-1; i++)
         {
             cout<<s[i];
         }
         cout<<" ";
         for(int i=s.size()-1; i<s.size(); i++)
         {
              cout<<s[i];
         }
       }
    }
    
}