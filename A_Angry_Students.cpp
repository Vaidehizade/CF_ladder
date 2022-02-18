#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;cin>>t;
    while(t--)
    {
        cin>>n;
        string s; cin>>s;
        int k=0;
        while(true)
        {
            bool change = false;
            for(int i=n-2; i>=0;i--)
            {
               if(s[i] == 'A' && s[i+1]== 'P')
               {
                 change = true;
                 s[i+1] = 'A';
               }
            }
            if(!change) {break;}
            k++;
        }
        cout<<k<<endl;
    }
}